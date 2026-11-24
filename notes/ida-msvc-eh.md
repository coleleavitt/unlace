# MSVC C++ exceptions: how IDA 9.5 shows them, and a plan for unlace (2026-11-24)

Deepens gap 1 of `notes/ida-gaps.md`. unlace shows Itanium (GCC/Clang) try/catch with
`itaniumeh` (`docs/spec/02-lift-and-flow.md` §2.15), whose design already copies IDA's: a helper on
each edge where the exception state changes, read by the structurer and printed as `try`/`catch`.
MSVC binaries get nothing: no FuncInfo, no try/catch, catch funclets stay separate `sub_`
functions, and `_CxxThrowException(&obj, &ThrowInfo)` prints as a call. This note describes how IDA
does it, from the pseudocode of two plugins, and maps each piece onto unlace.

Sources: `~/SiteResearch/ida-pro/sqlite/plugins__eh_parse.sqlite` (441 functions; EH markup for every
ABI) and `plugins__eh34.sqlite` (985 functions, 402 KB of code; Hex-Rays MSVC x64 EH). Re-check any
row with `sqlite3 -readonly <db> "select text from pseudocode where ea=<addr>"` or
`sqlite3 -readonly ~/SiteResearch/ida-pro/derived/ida-links.sqlite "select text,func_name from string_users where mod='eh34' and text like '%<needle>%'"`.

## 1. Two plugins, two jobs

| plugin | job | where |
|---|---|---|
| eh_parse | Find each function's personality routine and decode its handler data into typed, commented database items. Runs at load, works for Itanium LSDA, ARM EHABI, SjLj and MSVC. | personality table `sub_19720`; FuncInfo layouts `sub_15DC0`; FH4 `sub_20DC0`; x64 UNWIND_INFO `sub_284C0`, `sub_293C0` (epilog scopes), `sub_1BBE0` |
| eh34 | Turn the decoded data into microcode: exception states per instruction, catch and unwind funclets inlined into the parent, helper calls on state changes, then try/catch after structuring. MSVC x64 only. | see §3 |

eh34 calls the kernel little (it decodes the bytes itself through an image reader) and Hex-Rays a lot:
477 calls of `get_hexdsp`, against 31 of `pack_dd` and 61 of `clear_tinfo_t` (`select callee_name,sites from api_use where caller_mod='eh34' order by sites desc`).

## 2. Recognising and decoding the data (eh_parse)

**Personality.** `sub_19720` matches the handler an x64 `UNWIND_INFO` names (flags `UNW_FLAG_EHANDLER`/
`UHANDLER`) against `__CxxFrameHandler`, `2`, `3`, `4`, `__CxxFrameHandler_EH`, `__GSHandlerCheck_EH`,
`__GSHandlerCheck_EH4`, `__GSHandlerCheck_SEH`, `__C_specific_handler`. The handler data follows the
unwind codes (after `GSHandlerCheck`'s cookie offset for the GS variants). Unwind info is validated first
(`sub_284C0`: version, flags, alignment, range vs prologue size; `sub_1BBE0` skips the rest after "too many
function entries with invalid unwind data").

**FuncInfo (FH3), magic 0x19930520..0x19930522.** eh34 `sub_3F6E0` accepts
`(magic & 0x1FFFFFFF) - 0x19930520 <= 2` and checks each count against its pointer
("incongruous max_state / ea", "num_try_blocks", "num_ip_to_state_entries"). eh_parse declares the five
historical layouts as structs (strings in `sub_15DC0`); the x64 one is

```c
struct FuncInfo { int magicNumber; int maxState; rva pUnwindMap; int nTryBlocks; rva pTryBlockMap;
                  int nIPMapEntries; rva pIPtoStateMap; int dispUnwindHelp; rva pESTypeList; int EHFlags; };
struct TryBlockMapEntry { int tryLow, tryHigh, catchHigh, nCatches; rva pHandlerArray; };
```

and the x86 one has `EHContextDelta` instead of `dispUnwindHelp` (the state lives in a frame slot,
not in an IP map). Each table entry is validated: `sub_3EEC0` (`try_low < 0`, `try_high < try_low`,
`catch_high < try_high`, `num_catches < 0`, no handler array), `sub_3C7A0` (an unwind entry's
`next_state` must be `>= -1` and below its own index, so the state tree has no cycles).

**FH4 (VS2019+, `__CxxFrameHandler4`).** `sub_20DC0`: a header byte with flags (1 = frame displacement
present, 2 = separated code segments, 4 = BBT flags, 8 = unwind map, 0x10 = try map), then RVAs and
compressed integers. `sub_1E700` decodes one compressed unsigned: the low nibble of the first byte indexes
a length table (1 to 5 bytes) and a shift table; it reads the bytes ending at the value and shifts right.
The IP-to-state map (`sub_20B40`) is a count, then pairs of (IP delta, state + 1), both compressed, the IP
accumulating from the function start; with flag 2 a segment map selects the map for the chunk being
decoded. Unwind-map entries carry a funclet type in their low 2 bits.

**x86 SEH.** `_EH4_SCOPETABLE_RECORD` (`sub_15DC0`) and the pc module's SEH4 code (survey §3.3) describe
`__try/__except` scope tables for `_except_handler4`; eh34 does not show them (x64 only).

## 3. Making try/catch (eh34)

1. **Collect.** `sub_20300` gathers, per function, the RUNTIME_FUNCTION entries that belong to it (the
   parent plus its funclets, "no relevant RUNTIME_FUNCTION entries" otherwise), the catch handlers and
   ThrowInfo records; `sub_1C9A0`/`sub_2DFB0` look up RUNTIME_FUNCTION and UNWIND_INFO by address.
   `sub_6D080` replays the unwind codes against the prologue instructions and refuses mismatches
   ("Mismatched register for PUSH_NONVOL", "Unrestored XMM register"), so frame offsets in funclets can be
   trusted.
2. **States into microcode.** `sub_640E0` (and `sub_15950`) runs when microcode is generated: it maps each
   instruction to its state from the IP map and checks the establisher frame offset against the
   lowest stack reference. `sub_25660`/`sub_24BA0`/`sub_24E60` precompute and saturate state ranges.
3. **Inline the funclets.** Catch and unwind funclets are separate x64 functions that receive the
   parent's establisher frame. eh34 copies their microcode into the parent (`sub_6A900`
   `begin_inlining`, `sub_5E760` `transact_inline_request`, `sub_68EA0` `do_inline_eh4_func_entry` with a
   check that the inlined module index matches), rebasing frame references so a catch body reads the
   parent's locals. A catch funclet returns the continuation address; `sub_36B80`
   (`adjust_try_continuation_boundaries`) turns that into an edge back into the parent. A funclet that
   cannot be inlined becomes `__eh34_catch_handler_absent(s, i, ea)` / `__eh34_unwind_handler_absent(s, ea)`.
4. **Helpers on state changes.** Each edge that changes state gets a call (vocabulary below). `sub_57400`
   and `sub_579B0` validate them later ("call %s arg %d not RTTI ea", "state %d entered already").
   `sub_42980`/`sub_421A0` build the "descend" scaffolding (catch blocks and unwind actions under a state),
   `sub_43660` pairs ascents with descents, `sub_2C9E0` finds the transition sequence between two states
   through their common ancestor in the unwind tree.
5. **Throw.** `sub_39140` (`create_throw_helper_calls`) finds calls to `_CxxThrowException` with two
   arguments (an object address and a numeric ThrowInfo address) and rewrites them as `__eh34_throw`;
   `sub_5C7E0` reads the ThrowInfo's CatchableTypeArray (count, then RVAs, each bounds-checked) to name the
   thrown type.
6. **Structure.** `sub_37D50` (`pre_structural`) walks the blocks and replaces enter/exit pairs with scopes,
   so the structurer emits `try { } catch (T) { }`. What is left over is printed as the helpers, controlled
   by `cfg/eh34.cfg`: `OUTPUT_TYPE = OUTPUT_STRUCTURED_ONLY` (default; 0 = none, 2 = structured and
   unstructured), `SHOW_WIND_STATES = NO` (hide `__wind`/`__unwind`, i.e. destructor states),
   `INFORM_ABOUT_HIDDEN_STATES = YES` (a comment at the top when states are hidden: `sub_38740`
   "Hidden C++ exception states: %s"). Per-function overrides live in the database (`sub_2DC10`).

Helper vocabulary (strings in eh34, each with its own description):

| helper | meaning |
|---|---|
| `__eh34_try(s1, s2)` / `__eh34_enter_try_state` / `__eh34_exit_try_state` | enter or leave try state s2 under parent s1 |
| `__eh34_wind(s1, s2)` / `__eh34_enter_wind_state` / `__eh34_exit_wind_state` | an object with a destructor was created (state s2) |
| `__eh34_unwind(s)`, `__eh34_no_unwind_handler(s)`, `__eh34_continue_unwinding(s1, s2)`, `__eh34_propagate_exception_into_caller(s1, s2)` | destructor run on the exception path; terminate; go up one state; leave the function |
| `__eh34_catch(s)`, `__eh34_catch_type(s, "ea")`, `__eh34_catch_ellipsis(s)`, `__eh34_caught_type`, `__eh34_caught_ellipsis` | catch clauses of try state s |
| `__eh34_try_continuation(s, i, ea)`, `__eh34_dead_end_try/wind(s)`, `__eh34_scope_strut(s)` | internal: where catch i resumes, states with no exit, scope support |
| `__eh34_throw` | rewritten `_CxxThrowException` |
| `__seh64_except_condition` | an x64 `__C_specific_handler` filter |

## 4. Plan for unlace

unlace already has the hard half: the exceptional-edge helpers (`eh_unwinding`, `eh_exception`,
`eh_selector`), the `try`/`catch` printer (`crates/unlace-emit/src/p9_emit/printc.rs` `emit_eh_try`),
and `.pdata` reading for function starts (`analyzers/entry/pdatainterior.rs`,
`pereloccode.rs`). What it lacks is the MSVC decoder and funclet handling. Proposed as one option,
`msvceh on | catch | off` (mirrors `itaniumeh`; no row exists today), in four PRs, smallest first:

| step | what | owner | size |
|---|---|---|---|
| 1 | **throw.** A call to `_CxxThrowException`/`CxxThrowException` with a constant second argument prints `throw (T)obj;`: T from ThrowInfo -> CatchableTypeArray[0] -> TypeDescriptor name, demangled with the existing MSVC demangler; a null ThrowInfo is `throw;`. Also the call does not return. | `unlace-lift` or `unlace-bandb` P4 (a callfixup-like rewrite), RTTI reader from `analyzers/rtti` | S |
| 2 | **decode.** `analyzers/entry/msvceh.rs`: personality from the UNWIND_INFO handler RVA (import or FLIRT/PDB name), FH3 (both layouts) and FH4 (compressed ints, segment maps), IP-to-state, unwind map, try map, handler arrays. Name funclets `<parent>$catch$<n>` / `$dtor$<n>` and attach them to the parent instead of listing them as roots. Bounds-check every RVA and count as eh34 does (§2), cap counts, reject state cycles. | `unlace-analysis` | S-M |
| 3 | **edges.** For each try block, give the first call inside its IP range an exceptional edge (as `itaniumeh` does per landing pad) to a synthetic block that calls the catch funclet(s) with the catch type as a selector, and continue at the funclet's returned continuation address. Destructor (unwind) states only under `on`, like `itaniumeh catch`. | `unlace-lift` `p2_lift/msvceh.rs` (beside `itaniumeh.rs`) | M |
| 4 | **inline funclets.** Decompile the funclet into the parent with its establisher-frame accesses rebased to the parent's frame, so a catch body reads the parent's locals by name (IDA's step 3). Until then step 3 prints `catch (T) { parent$catch$0(); }`. | `unlace-lift` (flow) + P6 frame | M-L |

x86-32: `__CxxFrameHandler3` keeps the state in `[ebp-4]` (stores of constants mark transitions) and
SEH4 scope tables describe `__try/__except`; both are a later step and are what 32-bit malware uses.

Testing: MSVC x64 fixtures with try/catch (by value, by reference, `catch (...)`, nested try, rethrow,
destructors) built with `/EHsc`, once with FH3 (`/d2FH4-`) and once FH4 (default since VS2019).
Hostile inputs: truncated tables, `tryHigh < tryLow`, an unwind `next_state` pointing forward, counts that
overflow the section, a chained RUNTIME_FUNCTION loop (all rejected in IDA's checks above).

Spec: a new section next to §2.15 in `docs/spec/02-lift-and-flow.md`; the option row in
`crates/unlace-decomp/phases.toml` with tier and symptoms ("catch block missing from an MSVC C++ function",
"_CxxThrowException(&v, &dat_...) instead of throw", "a $catch$ funclet decompiled as its own function").

# Straighten lvar pairs (sub_4B56B0): partial decode

Source: the IDA 9.5 Hex-Rays dump (`hexrays/hexx64/out/all/`) and `hexrays__hexx64.sqlite` (`names`, `xrefs`, `functions`). Tracks the gap in row 3 of `hexrays-microcode-deep.md`. Decode status only: no unlace code change.

## Driver (sub_4B56B0 @ 0x4B56B0)

- Walks the lvars (`*(a1+528)[i]`), runs `sub_4B5380` and, when the arch option at `a1+824` is set, `sub_133110` (the CONTAINING_RECORD recognizer).
- For each use on the lvar's use chain (`v53+48`), it builds a visitor object `v58`:
  - `+0` vtable `off_5D0030`, `+8` the Funcdata-side pointer (`lvar+64`), `+16` the lvar, `+40` a byte the callback sets, `+44` an int counter the callback increments.
- It calls `sub_1321D0(use, &v58)` (a use-chain walker that dispatches through the vtable), then `sub_4C9AD0` (the inlined memcpy/strcpy/memset handlers, already noted in the issue).
- If the counter (`DWORD1(v61)`, i.e. `v58+44`) is nonzero it sets lvar flag `+24 |= 0x80` and logs `straighten lvar pairs`. The string marks a callback hit, not the rewrite itself.

## Vtable off_5D0030

The data xrefs from the dump database give three slots:

| slot | address | status |
|---|---|---|
| +0x00 | 0x4A2EF0 | function not in the dump (`MISSING`) |
| +0x08 | 0x4A2F90 | function not in the dump (`MISSING`) |
| +0x10 | 0x4A4E50 | decoded below |

## Callback sub_4A4E50 (slot +0x10)

Operates on one use `a2` (kind byte 14 at entry) and two lvar map entries at the use's offset and at `+16`. Each map entry is a 104-byte record; field `[0]` is a kind and `[22]` a size.

1. Look up the two entries (`sub_22F760`); they must share the same index and be adjacent: `v11[1] == v6[1] + size(use)`. Otherwise return 0.
2. Kind 2 (a typed scalar): build a joined type `v31` with `sub_130A30`, then check it can be read as one whole at the use's offset (`sub_13A7C0`).
3. Kind 1 or 3: check the pair with `sub_138CD0`, `sub_1355E0` (twice) and `sub_145350` (flag `0x80` on the Funcdata side). For this path the low and high roles swap first when a global flag at `*(a1+8)+145` is set and `sub_1304A0` finds the use's operand.
4. On success: clear lvar flag `0x200`, set `0x80`, optionally set `BYTE1(v31) |= 2` for a 64-bit long-long shape, rewrite the use with `sub_130220(a2, v31)`, increment the counter (`a1+44`) and set `a1+40 = 1`.

So the rewrite is: two adjacent word-sized uses of one register-pair local become one whole-value use with the joined type, and the lvar is marked. Matches the issue's "both halves from one 64-bit op" condition only partly; the kind-1/3 branch is not decoded.

## Not decoded yet

- Slots +0x00 and +0x08 (dumps missing; they need the Hex-Rays plugin binary, not present in the dump directory).
- `sub_132280` (the visitor dispatch), `sub_22F760`, `sub_130A30`, `sub_13A7C0`, `sub_138CD0`, `sub_1355E0`, `sub_145350`, `sub_130220`.

## Next step before implementation

1. Decode the two missing slots (fetch the binary or a fresh dump with those functions).
2. Decide the unlace placement: the pass changes an lvar's uses, so it belongs next to the variable merge (`crates/unlace-middle/src/p6_variables/merge.rs`) or the lvar split, behind a phases.toml option (a judgement call) unless the rewrite is only a fact-preserving join.
3. Measure impact on the i386 DLL (65 CONCAT44 uses per `hexrays-microcode.md` section 4).

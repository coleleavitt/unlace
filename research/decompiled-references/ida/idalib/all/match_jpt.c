// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x453290
// Name:            match_jpt
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x453290 jmp     match_jpt_0
//
// Resolved target: match_jpt_0
// Target address:  0x453000
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt_0 via direct jump indirection
    return match_jpt_0(/* forwarded args */);
}


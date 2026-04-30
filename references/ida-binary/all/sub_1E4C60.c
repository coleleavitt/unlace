// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1E4C60
// Name:            sub_1E4C60
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1E4C60 jmp     sub_1E4A40
//
// Resolved target: sub_1E4A40
// Target address:  0x1E4A40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_1E4C60(/* see target signature */)
{
    // Tail-call to sub_1E4A40 via direct jump indirection
    return sub_1E4A40(/* forwarded args */);
}


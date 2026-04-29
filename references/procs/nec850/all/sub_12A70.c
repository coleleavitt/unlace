// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12A70
// Name:            sub_12A70
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x12A70 jmp     sub_12910
//
// Resolved target: sub_12910
// Target address:  0x12910
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_BYTE *)
// ============================================================

/* see target sig */ sub_12A70(/* see target signature */)
{
    // Tail-call to sub_12910 via direct jump indirection
    return sub_12910(/* forwarded args */);
}


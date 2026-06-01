// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2FB9D0
// Name:            sub_2FB9D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2FB9D0 jmp     sub_2FA7E0
//
// Resolved target: sub_2FA7E0
// Target address:  0x2FA7E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_2FB9D0(/* see target signature */)
{
    // Tail-call to sub_2FA7E0 via direct jump indirection
    return sub_2FA7E0(/* forwarded args */);
}


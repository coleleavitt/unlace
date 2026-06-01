// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A96A0
// Name:            .ieee_realcvt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A96A0 jmp     cs:off_2C7A338
//
// Resolved target: ieee_realcvt
// Target address:  0x57B180
// GOT/IAT slot:    0x2C7A338
// Slot symbol:     off_2C7A338
// Target type:     <no type info>
// ============================================================

void .ieee_realcvt(/* see target signature */)
{
    // Tail-call to ieee_realcvt via GOT/IAT indirection
    return ieee_realcvt(/* forwarded args */);
}


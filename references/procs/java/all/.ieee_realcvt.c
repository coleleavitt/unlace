// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6030
// Name:            .ieee_realcvt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6030 jmp     cs:off_2D000
//
// Resolved target: ieee_realcvt
// Target address:  0x2D500
// GOT/IAT slot:    0x2D000
// Slot symbol:     off_2D000
// Target type:     <no type info>
// ============================================================

void .ieee_realcvt(/* see target signature */)
{
    // Tail-call to ieee_realcvt via GOT/IAT indirection
    return ieee_realcvt(/* forwarded args */);
}


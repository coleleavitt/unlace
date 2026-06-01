// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A99E0
// Name:            .leading_zero_important
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A99E0 jmp     cs:off_2C7A4D8
//
// Resolved target: leading_zero_important
// Target address:  0x3C56C0
// GOT/IAT slot:    0x2C7A4D8
// Slot symbol:     off_2C7A4D8
// Target type:     <no type info>
// ============================================================

void .leading_zero_important(/* see target signature */)
{
    // Tail-call to leading_zero_important via GOT/IAT indirection
    return leading_zero_important(/* forwarded args */);
}


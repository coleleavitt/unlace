// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA2C0
// Name:            .hexplace_t__touval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA2C0 jmp     cs:off_2C7A948
//
// Resolved target: hexplace_t__touval
// Target address:  0x4253C0
// GOT/IAT slot:    0x2C7A948
// Slot symbol:     off_2C7A948
// Target type:     <no type info>
// ============================================================

void .hexplace_t__touval(/* see target signature */)
{
    // Tail-call to hexplace_t__touval via GOT/IAT indirection
    return hexplace_t__touval(/* forwarded args */);
}


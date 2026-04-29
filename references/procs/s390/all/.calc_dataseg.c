// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10150
// Name:            .calc_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10150 jmp     cs:off_2E090
//
// Resolved target: calc_dataseg
// Target address:  0x36D08
// GOT/IAT slot:    0x2E090
// Slot symbol:     off_2E090
// Target type:     <no type info>
// ============================================================

void .calc_dataseg(/* see target signature */)
{
    // Tail-call to calc_dataseg via GOT/IAT indirection
    return calc_dataseg(/* forwarded args */);
}


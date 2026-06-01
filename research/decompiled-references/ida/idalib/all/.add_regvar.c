// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA750
// Name:            .add_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA750 jmp     cs:off_2C7AB90
//
// Resolved target: add_regvar
// Target address:  0x6757D0
// GOT/IAT slot:    0x2C7AB90
// Slot symbol:     off_2C7AB90
// Target type:     <no type info>
// ============================================================

void .add_regvar(/* see target signature */)
{
    // Tail-call to add_regvar via GOT/IAT indirection
    return add_regvar(/* forwarded args */);
}


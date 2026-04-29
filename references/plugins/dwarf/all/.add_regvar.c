// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA820
// Name:            .add_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA820 jmp     cs:off_CA3F8
//
// Resolved target: add_regvar
// Target address:  0xD0D30
// GOT/IAT slot:    0xCA3F8
// Slot symbol:     off_CA3F8
// Target type:     <no type info>
// ============================================================

void .add_regvar(/* see target signature */)
{
    // Tail-call to add_regvar via GOT/IAT indirection
    return add_regvar(/* forwarded args */);
}


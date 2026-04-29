// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EA70
// Name:            .find_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EA70 jmp     cs:off_4E9D20
//
// Resolved target: find_regvar
// Target address:  0x4EC760
// GOT/IAT slot:    0x4E9D20
// Slot symbol:     off_4E9D20
// Target type:     <no type info>
// ============================================================

void .find_regvar(/* see target signature */)
{
    // Tail-call to find_regvar via GOT/IAT indirection
    return find_regvar(/* forwarded args */);
}


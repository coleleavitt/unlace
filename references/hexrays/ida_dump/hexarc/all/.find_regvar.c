// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA10
// Name:            .find_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA10 jmp     cs:off_4B9CF0
//
// Resolved target: find_regvar
// Target address:  0x4BC710
// GOT/IAT slot:    0x4B9CF0
// Slot symbol:     off_4B9CF0
// Target type:     <no type info>
// ============================================================

void .find_regvar(/* see target signature */)
{
    // Tail-call to find_regvar via GOT/IAT indirection
    return find_regvar(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA40
// Name:            .find_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA40 jmp     cs:off_4C0D08
//
// Resolved target: find_regvar
// Target address:  0x4C3D20
// GOT/IAT slot:    0x4C0D08
// Slot symbol:     off_4C0D08
// Target type:     <no type info>
// ============================================================

void .find_regvar(/* see target signature */)
{
    // Tail-call to find_regvar via GOT/IAT indirection
    return find_regvar(/* forwarded args */);
}


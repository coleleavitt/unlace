// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB30
// Name:            .find_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB30 jmp     cs:off_4EDD80
//
// Resolved target: find_regvar
// Target address:  0x4F20C0
// GOT/IAT slot:    0x4EDD80
// Slot symbol:     off_4EDD80
// Target type:     <no type info>
// ============================================================

void .find_regvar(/* see target signature */)
{
    // Tail-call to find_regvar via GOT/IAT indirection
    return find_regvar(/* forwarded args */);
}


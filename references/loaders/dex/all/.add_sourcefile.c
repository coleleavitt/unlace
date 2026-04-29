// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33C0
// Name:            .add_sourcefile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33C0 jmp     cs:off_281C8
//
// Resolved target: add_sourcefile
// Target address:  0x28678
// GOT/IAT slot:    0x281C8
// Slot symbol:     off_281C8
// Target type:     <no type info>
// ============================================================

void .add_sourcefile(/* see target signature */)
{
    // Tail-call to add_sourcefile via GOT/IAT indirection
    return add_sourcefile(/* forwarded args */);
}


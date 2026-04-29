// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA670
// Name:            .add_sourcefile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA670 jmp     cs:off_CA320
//
// Resolved target: add_sourcefile
// Target address:  0xD0C58
// GOT/IAT slot:    0xCA320
// Slot symbol:     off_CA320
// Target type:     <no type info>
// ============================================================

void .add_sourcefile(/* see target signature */)
{
    // Tail-call to add_sourcefile via GOT/IAT indirection
    return add_sourcefile(/* forwarded args */);
}


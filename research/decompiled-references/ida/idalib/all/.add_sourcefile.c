// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C70
// Name:            .add_sourcefile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C70 jmp     cs:off_2C79E20
//
// Resolved target: add_sourcefile
// Target address:  0x3C7440
// GOT/IAT slot:    0x2C79E20
// Slot symbol:     off_2C79E20
// Target type:     <no type info>
// ============================================================

void .add_sourcefile(/* see target signature */)
{
    // Tail-call to add_sourcefile via GOT/IAT indirection
    return add_sourcefile(/* forwarded args */);
}


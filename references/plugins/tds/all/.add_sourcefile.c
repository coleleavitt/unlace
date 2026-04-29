// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .add_sourcefile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_A0E8
//
// Resolved target: add_sourcefile
// Target address:  0xA318
// GOT/IAT slot:    0xA0E8
// Slot symbol:     off_A0E8
// Target type:     <no type info>
// ============================================================

void .add_sourcefile(/* see target signature */)
{
    // Tail-call to add_sourcefile via GOT/IAT indirection
    return add_sourcefile(/* forwarded args */);
}


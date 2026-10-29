// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC30
// Name:            .qmakefile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC30 jmp     cs:off_2C7BE00
//
// Resolved target: qmakefile
// Target address:  0x83DEC0
// GOT/IAT slot:    0x2C7BE00
// Slot symbol:     off_2C7BE00
// Target type:     <no type info>
// ============================================================

void .qmakefile(/* see target signature */)
{
    // Tail-call to qmakefile via GOT/IAT indirection
    return qmakefile(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A680
// Name:            .qsplitfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A680 jmp     cs:qsplitfile_ptr
//
// Resolved target: qsplitfile
// Target address:  0x8D9030
// GOT/IAT slot:    0x8A3FE0
// Slot symbol:     qsplitfile_ptr
// Target type:     <no type info>
// ============================================================

void .qsplitfile(/* see target signature */)
{
    // Tail-call to qsplitfile via GOT/IAT indirection
    return qsplitfile(/* forwarded args */);
}


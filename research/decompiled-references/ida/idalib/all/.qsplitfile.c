// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACDC0
// Name:            .qsplitfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACDC0 jmp     cs:off_2C7BEC8
//
// Resolved target: qsplitfile
// Target address:  0x83E060
// GOT/IAT slot:    0x2C7BEC8
// Slot symbol:     off_2C7BEC8
// Target type:     <no type info>
// ============================================================

void .qsplitfile(/* see target signature */)
{
    // Tail-call to qsplitfile via GOT/IAT indirection
    return qsplitfile(/* forwarded args */);
}


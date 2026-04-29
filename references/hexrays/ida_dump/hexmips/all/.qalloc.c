// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF50
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF50 jmp     cs:off_4CD790
//
// Resolved target: qalloc
// Target address:  0x4D01A8
// GOT/IAT slot:    0x4CD790
// Slot symbol:     off_4CD790
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}


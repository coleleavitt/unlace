// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110 jmp     cs:off_5070
//
// Resolved target: qalloc
// Target address:  0x5188
// GOT/IAT slot:    0x5070
// Slot symbol:     off_5070
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}


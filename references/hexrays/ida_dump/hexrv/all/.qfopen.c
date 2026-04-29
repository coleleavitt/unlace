// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA40
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA40 jmp     cs:off_4BFD08
//
// Resolved target: qfopen
// Target address:  0x4C3220
// GOT/IAT slot:    0x4BFD08
// Slot symbol:     off_4BFD08
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}


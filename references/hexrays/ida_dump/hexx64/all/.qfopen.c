// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB40
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB40 jmp     cs:off_4EDD88
//
// Resolved target: qfopen
// Target address:  0x4F20C8
// GOT/IAT slot:    0x4EDD88
// Slot symbol:     off_4EDD88
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}


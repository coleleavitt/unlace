// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A6E0
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A6E0 jmp     cs:qfopen_ptr
//
// Resolved target: qfopen
// Target address:  0x8D9068
// GOT/IAT slot:    0x8A4010
// Slot symbol:     qfopen_ptr
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}


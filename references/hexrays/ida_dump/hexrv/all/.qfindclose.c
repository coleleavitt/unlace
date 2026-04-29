// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B920
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B920 jmp     cs:off_4BFC78
//
// Resolved target: qfindclose
// Target address:  0x4C3188
// GOT/IAT slot:    0x4BFC78
// Slot symbol:     off_4BFC78
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}


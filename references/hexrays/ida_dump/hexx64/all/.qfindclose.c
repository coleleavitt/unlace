// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA10
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA10 jmp     cs:off_4EDCF0
//
// Resolved target: qfindclose
// Target address:  0x4F2028
// GOT/IAT slot:    0x4EDCF0
// Slot symbol:     off_4EDCF0
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B530
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B530 jmp     cs:off_4ED280
//
// Resolved target: qstrdup
// Target address:  0x4F1578
// GOT/IAT slot:    0x4ED280
// Slot symbol:     off_4ED280
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}


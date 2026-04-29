// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130 jmp     cs:off_6080
//
// Resolved target: qalloc
// Target address:  0x6208
// GOT/IAT slot:    0x6080
// Slot symbol:     off_6080
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}


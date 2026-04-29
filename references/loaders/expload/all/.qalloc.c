// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_5068
//
// Resolved target: qalloc
// Target address:  0x51A8
// GOT/IAT slot:    0x5068
// Slot symbol:     off_5068
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}


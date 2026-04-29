// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63D0
// Name:            .qalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63D0 jmp     cs:off_2D1D0
//
// Resolved target: qalloc
// Target address:  0x2D6D0
// GOT/IAT slot:    0x2D1D0
// Slot symbol:     off_2D1D0
// Target type:     <no type info>
// ============================================================

void .qalloc(/* see target signature */)
{
    // Tail-call to qalloc via GOT/IAT indirection
    return qalloc(/* forwarded args */);
}


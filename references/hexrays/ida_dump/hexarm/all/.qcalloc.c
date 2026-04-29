// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D3C0
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D3C0 jmp     cs:off_4E91C8
//
// Resolved target: qcalloc
// Target address:  0x4EBBB8
// GOT/IAT slot:    0x4E91C8
// Slot symbol:     off_4E91C8
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


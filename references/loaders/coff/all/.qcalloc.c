// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4100
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4100 jmp     cs:off_23068
//
// Resolved target: qcalloc
// Target address:  0x23488
// GOT/IAT slot:    0x23068
// Slot symbol:     off_23068
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


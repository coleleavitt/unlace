// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5100
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5100 jmp     cs:off_1A068
//
// Resolved target: qcalloc
// Target address:  0x1A3E8
// GOT/IAT slot:    0x1A068
// Slot symbol:     off_1A068
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


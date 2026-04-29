// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_A030
//
// Resolved target: qcalloc
// Target address:  0xA260
// GOT/IAT slot:    0xA030
// Slot symbol:     off_A030
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


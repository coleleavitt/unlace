// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112E00
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112E00 jmp     cs:qcalloc_ptr
//
// Resolved target: qcalloc
// Target address:  0x8D43B8
// GOT/IAT slot:    0x8A03A0
// Slot symbol:     qcalloc_ptr
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


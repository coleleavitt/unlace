// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_8050
//
// Resolved target: qcalloc
// Target address:  0x82B0
// GOT/IAT slot:    0x8050
// Slot symbol:     off_8050
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


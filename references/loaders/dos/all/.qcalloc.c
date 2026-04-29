// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_B060
//
// Resolved target: qcalloc
// Target address:  0xB4F8
// GOT/IAT slot:    0xB060
// Slot symbol:     off_B060
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


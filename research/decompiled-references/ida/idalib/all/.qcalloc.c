// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8360
// Name:            .qcalloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8360 jmp     cs:off_2C79998
//
// Resolved target: qcalloc
// Target address:  0x83FC40
// GOT/IAT slot:    0x2C79998
// Slot symbol:     off_2C79998
// Target type:     <no type info>
// ============================================================

void .qcalloc(/* see target signature */)
{
    // Tail-call to qcalloc via GOT/IAT indirection
    return qcalloc(/* forwarded args */);
}


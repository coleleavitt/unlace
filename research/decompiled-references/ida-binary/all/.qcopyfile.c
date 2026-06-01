// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115B20
// Name:            .qcopyfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115B20 jmp     cs:qcopyfile_ptr
//
// Resolved target: qcopyfile
// Target address:  0x8D60C0
// GOT/IAT slot:    0x8A1A30
// Slot symbol:     qcopyfile_ptr
// Target type:     <no type info>
// ============================================================

void .qcopyfile(/* see target signature */)
{
    // Tail-call to qcopyfile via GOT/IAT indirection
    return qcopyfile(/* forwarded args */);
}


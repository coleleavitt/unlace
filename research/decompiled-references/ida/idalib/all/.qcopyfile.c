// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9FC0
// Name:            .qcopyfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9FC0 jmp     cs:off_2C7A7C8
//
// Resolved target: qcopyfile
// Target address:  0x83F3F0
// GOT/IAT slot:    0x2C7A7C8
// Slot symbol:     off_2C7A7C8
// Target type:     <no type info>
// ============================================================

void .qcopyfile(/* see target signature */)
{
    // Tail-call to qcopyfile via GOT/IAT indirection
    return qcopyfile(/* forwarded args */);
}


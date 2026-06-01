// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115FD0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115FD0 jmp     cs:qstrlwr_ptr
//
// Resolved target: qstrlwr
// Target address:  0x8D63C0
// GOT/IAT slot:    0x8A1C88
// Slot symbol:     qstrlwr_ptr
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}


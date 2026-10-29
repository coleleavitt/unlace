// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118A20
// Name:            .qgetenv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118A20 jmp     cs:qgetenv_ptr
//
// Resolved target: qgetenv
// Target address:  0x8D7E30
// GOT/IAT slot:    0x8A31B0
// Slot symbol:     qgetenv_ptr
// Target type:     <no type info>
// ============================================================

void .qgetenv(/* see target signature */)
{
    // Tail-call to qgetenv via GOT/IAT indirection
    return qgetenv(/* forwarded args */);
}


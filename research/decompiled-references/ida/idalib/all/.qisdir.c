// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD440
// Name:            .qisdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD440 jmp     cs:off_2C7C208
//
// Resolved target: qisdir
// Target address:  0x83ECB0
// GOT/IAT slot:    0x2C7C208
// Slot symbol:     off_2C7C208
// Target type:     <no type info>
// ============================================================

void .qisdir(/* see target signature */)
{
    // Tail-call to qisdir via GOT/IAT indirection
    return qisdir(/* forwarded args */);
}


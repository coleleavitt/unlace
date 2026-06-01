// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113AF0
// Name:            .qfseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113AF0 jmp     cs:qfseek_ptr
//
// Resolved target: qfseek
// Target address:  0x8D4C20
// GOT/IAT slot:    0x8A0A18
// Slot symbol:     qfseek_ptr
// Target type:     <no type info>
// ============================================================

void .qfseek(/* see target signature */)
{
    // Tail-call to qfseek via GOT/IAT indirection
    return qfseek(/* forwarded args */);
}


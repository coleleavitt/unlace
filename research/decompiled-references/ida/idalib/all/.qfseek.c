// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8C60
// Name:            .qfseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8C60 jmp     cs:off_2C79E18
//
// Resolved target: qfseek
// Target address:  0x83F190
// GOT/IAT slot:    0x2C79E18
// Slot symbol:     off_2C79E18
// Target type:     <no type info>
// ============================================================

void .qfseek(/* see target signature */)
{
    // Tail-call to qfseek via GOT/IAT indirection
    return qfseek(/* forwarded args */);
}


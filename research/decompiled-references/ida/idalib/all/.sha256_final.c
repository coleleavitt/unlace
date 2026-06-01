// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB80
// Name:            .sha256_final
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB80 jmp     cs:off_2C7C5A8
//
// Resolved target: sha256_final
// Target address:  0x84DB80
// GOT/IAT slot:    0x2C7C5A8
// Slot symbol:     off_2C7C5A8
// Target type:     <no type info>
// ============================================================

void .sha256_final(/* see target signature */)
{
    // Tail-call to sha256_final via GOT/IAT indirection
    return sha256_final(/* forwarded args */);
}


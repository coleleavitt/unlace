// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA60
// Name:            .bf_decrypt_ecb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA60 jmp     cs:off_2C7AD18
//
// Resolved target: bf_decrypt_ecb
// Target address:  0x827080
// GOT/IAT slot:    0x2C7AD18
// Slot symbol:     off_2C7AD18
// Target type:     <no type info>
// ============================================================

void .bf_decrypt_ecb(/* see target signature */)
{
    // Tail-call to bf_decrypt_ecb via GOT/IAT indirection
    return bf_decrypt_ecb(/* forwarded args */);
}


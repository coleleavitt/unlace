// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA060
// Name:            .sha256_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA060 jmp     cs:off_2C7A818
//
// Resolved target: sha256_init
// Target address:  0x84D940
// GOT/IAT slot:    0x2C7A818
// Slot symbol:     off_2C7A818
// Target type:     <no type info>
// ============================================================

void .sha256_init(/* see target signature */)
{
    // Tail-call to sha256_init via GOT/IAT indirection
    return sha256_init(/* forwarded args */);
}


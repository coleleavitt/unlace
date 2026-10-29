// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD670
// Name:            .sha256_update
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD670 jmp     cs:off_2C7C320
//
// Resolved target: sha256_update
// Target address:  0x84D970
// GOT/IAT slot:    0x2C7C320
// Slot symbol:     off_2C7C320
// Target type:     <no type info>
// ============================================================

void .sha256_update(/* see target signature */)
{
    // Tail-call to sha256_update via GOT/IAT indirection
    return sha256_update(/* forwarded args */);
}


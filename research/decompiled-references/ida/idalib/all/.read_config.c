// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADAA0
// Name:            .read_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADAA0 jmp     cs:off_2C7C538
//
// Resolved target: read_config
// Target address:  0x74A650
// GOT/IAT slot:    0x2C7C538
// Slot symbol:     off_2C7C538
// Target type:     <no type info>
// ============================================================

void .read_config(/* see target signature */)
{
    // Tail-call to read_config via GOT/IAT indirection
    return read_config(/* forwarded args */);
}


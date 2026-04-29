// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41B0
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41B0 jmp     cs:off_1F0C0
//
// Resolved target: read_config2
// Target address:  0x1F370
// GOT/IAT slot:    0x1F0C0
// Slot symbol:     off_1F0C0
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}


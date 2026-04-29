// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD40
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD40 jmp     cs:off_4BF688
//
// Resolved target: read_config2
// Target address:  0x4C2B78
// GOT/IAT slot:    0x4BF688
// Slot symbol:     off_4BF688
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}


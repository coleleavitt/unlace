// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD90
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD90 jmp     cs:off_4ED6B0
//
// Resolved target: read_config2
// Target address:  0x4F19C0
// GOT/IAT slot:    0x4ED6B0
// Slot symbol:     off_4ED6B0
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}


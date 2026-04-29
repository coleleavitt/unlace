// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA370
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA370 jmp     cs:off_CA1A0
//
// Resolved target: is_mapped
// Target address:  0xD0AD0
// GOT/IAT slot:    0xCA1A0
// Slot symbol:     off_CA1A0
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}


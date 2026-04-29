// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B920
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B920 jmp     cs:off_4ED478
//
// Resolved target: is_mapped
// Target address:  0x4F1770
// GOT/IAT slot:    0x4ED478
// Slot symbol:     off_4ED478
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}


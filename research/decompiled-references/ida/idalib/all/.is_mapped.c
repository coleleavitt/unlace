// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC1C0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC1C0 jmp     cs:off_2C7B8C8
//
// Resolved target: is_mapped
// Target address:  0x3BD4F0
// GOT/IAT slot:    0x2C7B8C8
// Slot symbol:     off_2C7B8C8
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}


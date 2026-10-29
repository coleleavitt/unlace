// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACE80
// Name:            .reloc_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACE80 jmp     cs:off_2C7BF28
//
// Resolved target: reloc_value
// Target address:  0x84C890
// GOT/IAT slot:    0x2C7BF28
// Slot symbol:     off_2C7BF28
// Target type:     <no type info>
// ============================================================

void .reloc_value(/* see target signature */)
{
    // Tail-call to reloc_value via GOT/IAT indirection
    return reloc_value(/* forwarded args */);
}


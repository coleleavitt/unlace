// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D8F0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D8F0 jmp     cs:off_4E9460
//
// Resolved target: is_mapped
// Target address:  0x4EBE58
// GOT/IAT slot:    0x4E9460
// Slot symbol:     off_4E9460
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}


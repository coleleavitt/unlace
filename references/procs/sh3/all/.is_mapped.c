// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51E0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51E0 jmp     cs:off_150D8
//
// Resolved target: is_mapped
// Target address:  0x16168
// GOT/IAT slot:    0x150D8
// Slot symbol:     off_150D8
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8E0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8E0 jmp     cs:off_4CD458
//
// Resolved target: is_mapped
// Target address:  0x4CFE50
// GOT/IAT slot:    0x4CD458
// Slot symbol:     off_4CD458
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}


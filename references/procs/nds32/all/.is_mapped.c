// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8240
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8240 jmp     cs:off_2A108
//
// Resolved target: is_mapped
// Target address:  0x2A678
// GOT/IAT slot:    0x2A108
// Slot symbol:     off_2A108
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}


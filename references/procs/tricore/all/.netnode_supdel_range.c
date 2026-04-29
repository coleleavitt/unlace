// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61F0
// Name:            .netnode_supdel_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61F0 jmp     cs:off_240E0
//
// Resolved target: netnode_supdel_range
// Target address:  0x25EB0
// GOT/IAT slot:    0x240E0
// Slot symbol:     off_240E0
// Target type:     <no type info>
// ============================================================

void .netnode_supdel_range(/* see target signature */)
{
    // Tail-call to netnode_supdel_range via GOT/IAT indirection
    return netnode_supdel_range(/* forwarded args */);
}


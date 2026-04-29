// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF0
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF0 jmp     cs:off_4CD660
//
// Resolved target: netnode_exist
// Target address:  0x4D0078
// GOT/IAT slot:    0x4CD660
// Slot symbol:     off_4CD660
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}


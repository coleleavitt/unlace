// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF0
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF0 jmp     cs:off_4BF660
//
// Resolved target: netnode_exist
// Target address:  0x4C2B50
// GOT/IAT slot:    0x4BF660
// Slot symbol:     off_4BF660
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}


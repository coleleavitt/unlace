// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6360
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6360 jmp     cs:off_2F198
//
// Resolved target: netnode_exist
// Target address:  0x2F808
// GOT/IAT slot:    0x2F198
// Slot symbol:     off_2F198
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}


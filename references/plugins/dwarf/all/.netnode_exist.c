// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA490
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA490 jmp     cs:off_CA230
//
// Resolved target: netnode_exist
// Target address:  0xD0B68
// GOT/IAT slot:    0xCA230
// Slot symbol:     off_CA230
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}


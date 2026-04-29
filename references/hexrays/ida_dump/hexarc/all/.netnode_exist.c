// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29CF0
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29CF0 jmp     cs:off_4B9660
//
// Resolved target: netnode_exist
// Target address:  0x4BC058
// GOT/IAT slot:    0x4B9660
// Slot symbol:     off_4B9660
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}


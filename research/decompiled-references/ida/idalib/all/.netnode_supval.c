// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7630
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7630 jmp     cs:off_2C79300
//
// Resolved target: netnode_supval
// Target address:  0x7BE970
// GOT/IAT slot:    0x2C79300
// Slot symbol:     off_2C79300
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


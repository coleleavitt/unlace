// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31C0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31C0 jmp     cs:off_290C8
//
// Resolved target: netnode_supval
// Target address:  0x29478
// GOT/IAT slot:    0x290C8
// Slot symbol:     off_290C8
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


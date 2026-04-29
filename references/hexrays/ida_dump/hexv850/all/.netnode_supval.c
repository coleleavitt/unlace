// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D0 jmp     cs:off_4C04D0
//
// Resolved target: netnode_supval
// Target address:  0x4C34B0
// GOT/IAT slot:    0x4C04D0
// Slot symbol:     off_4C04D0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D0 jmp     cs:off_4CD4D0
//
// Resolved target: netnode_supval
// Target address:  0x4CFED8
// GOT/IAT slot:    0x4CD4D0
// Slot symbol:     off_4CD4D0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


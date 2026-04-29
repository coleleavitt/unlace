// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3260
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3260 jmp     cs:off_28118
//
// Resolved target: netnode_supval
// Target address:  0x285C8
// GOT/IAT slot:    0x28118
// Slot symbol:     off_28118
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


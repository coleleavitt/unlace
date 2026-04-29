// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x299D0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x299D0 jmp     cs:off_4B94D0
//
// Resolved target: netnode_supval
// Target address:  0x4BBEB8
// GOT/IAT slot:    0x4B94D0
// Slot symbol:     off_4B94D0
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20460
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20460 jmp     cs:off_95218
//
// Resolved target: netnode_supval
// Target address:  0x95C50
// GOT/IAT slot:    0x95218
// Slot symbol:     off_95218
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


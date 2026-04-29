// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x295F0
// Name:            .netnode_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x295F0 jmp     cs:off_4B92E0
//
// Resolved target: netnode_next
// Target address:  0x4BBCB0
// GOT/IAT slot:    0x4B92E0
// Slot symbol:     off_4B92E0
// Target type:     <no type info>
// ============================================================

void .netnode_next(/* see target signature */)
{
    // Tail-call to netnode_next via GOT/IAT indirection
    return netnode_next(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA100
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA100 jmp     cs:off_2C7A868
//
// Resolved target: netnode_set
// Target address:  0x7BF2A0
// GOT/IAT slot:    0x2C7A868
// Slot symbol:     off_2C7A868
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABBD0
// Name:            .netnode_supprev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABBD0 jmp     cs:off_2C7B5D0
//
// Resolved target: netnode_supprev
// Target address:  0x7BECE0
// GOT/IAT slot:    0x2C7B5D0
// Slot symbol:     off_2C7B5D0
// Target type:     <no type info>
// ============================================================

void .netnode_supprev(/* see target signature */)
{
    // Tail-call to netnode_supprev via GOT/IAT indirection
    return netnode_supprev(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBB0
// Name:            .netnode_copy2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBB0 jmp     cs:off_4ED5C0
//
// Resolved target: netnode_copy2
// Target address:  0x4F18C8
// GOT/IAT slot:    0x4ED5C0
// Slot symbol:     off_4ED5C0
// Target type:     <no type info>
// ============================================================

void .netnode_copy2(/* see target signature */)
{
    // Tail-call to netnode_copy2 via GOT/IAT indirection
    return netnode_copy2(/* forwarded args */);
}


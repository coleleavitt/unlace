// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DB80
// Name:            .netnode_copy2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DB80 jmp     cs:off_4E95A8
//
// Resolved target: netnode_copy2
// Target address:  0x4EBFB8
// GOT/IAT slot:    0x4E95A8
// Slot symbol:     off_4E95A8
// Target type:     <no type info>
// ============================================================

void .netnode_copy2(/* see target signature */)
{
    // Tail-call to netnode_copy2 via GOT/IAT indirection
    return netnode_copy2(/* forwarded args */);
}


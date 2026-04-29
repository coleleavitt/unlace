// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B600
// Name:            .netnode_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B600 jmp     cs:off_4ED2E8
//
// Resolved target: netnode_next
// Target address:  0x4F15E0
// GOT/IAT slot:    0x4ED2E8
// Slot symbol:     off_4ED2E8
// Target type:     <no type info>
// ============================================================

void .netnode_next(/* see target signature */)
{
    // Tail-call to netnode_next via GOT/IAT indirection
    return netnode_next(/* forwarded args */);
}


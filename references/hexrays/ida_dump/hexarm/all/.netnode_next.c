// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D600
// Name:            .netnode_next
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D600 jmp     cs:off_4E92E8
//
// Resolved target: netnode_next
// Target address:  0x4EBCD8
// GOT/IAT slot:    0x4E92E8
// Slot symbol:     off_4E92E8
// Target type:     <no type info>
// ============================================================

void .netnode_next(/* see target signature */)
{
    // Tail-call to netnode_next via GOT/IAT indirection
    return netnode_next(/* forwarded args */);
}


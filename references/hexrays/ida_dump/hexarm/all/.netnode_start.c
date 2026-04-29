// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D970
// Name:            .netnode_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D970 jmp     cs:off_4E94A0
//
// Resolved target: netnode_start
// Target address:  0x4EBEA8
// GOT/IAT slot:    0x4E94A0
// Slot symbol:     off_4E94A0
// Target type:     <no type info>
// ============================================================

void .netnode_start(/* see target signature */)
{
    // Tail-call to netnode_start via GOT/IAT indirection
    return netnode_start(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9190
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9190 jmp     cs:off_2C7A0B0
//
// Resolved target: netnode_supstr
// Target address:  0x7BEA10
// GOT/IAT slot:    0x2C7A0B0
// Slot symbol:     off_2C7A0B0
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}


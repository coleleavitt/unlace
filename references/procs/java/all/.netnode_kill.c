// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6660
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6660 jmp     cs:off_2D318
//
// Resolved target: netnode_kill
// Target address:  0x2D828
// GOT/IAT slot:    0x2D318
// Slot symbol:     off_2D318
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


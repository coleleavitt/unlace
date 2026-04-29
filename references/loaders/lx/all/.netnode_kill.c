// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2360
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2360 jmp     cs:off_B198
//
// Resolved target: netnode_kill
// Target address:  0xB450
// GOT/IAT slot:    0xB198
// Slot symbol:     off_B198
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


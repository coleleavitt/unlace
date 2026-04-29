// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EAA0
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EAA0 jmp     cs:off_4E9D38
//
// Resolved target: netnode_kill
// Target address:  0x4EC778
// GOT/IAT slot:    0x4E9D38
// Slot symbol:     off_4E9D38
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


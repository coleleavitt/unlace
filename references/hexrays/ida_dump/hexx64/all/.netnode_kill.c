// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CB60
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CB60 jmp     cs:off_4EDD98
//
// Resolved target: netnode_kill
// Target address:  0x4F20D8
// GOT/IAT slot:    0x4EDD98
// Slot symbol:     off_4EDD98
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


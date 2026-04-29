// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA60
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA60 jmp     cs:off_4DAD18
//
// Resolved target: netnode_kill
// Target address:  0x4DD738
// GOT/IAT slot:    0x4DAD18
// Slot symbol:     off_4DAD18
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6600
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6600 jmp     cs:off_8D2E8
//
// Resolved target: netnode_kill
// Target address:  0x8D8A0
// GOT/IAT slot:    0x8D2E8
// Slot symbol:     off_8D2E8
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


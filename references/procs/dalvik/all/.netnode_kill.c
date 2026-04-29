// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5460
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5460 jmp     cs:off_1A218
//
// Resolved target: netnode_kill
// Target address:  0x1A5B0
// GOT/IAT slot:    0x1A218
// Slot symbol:     off_1A218
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


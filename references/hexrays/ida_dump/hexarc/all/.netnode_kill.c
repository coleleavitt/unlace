// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA40
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA40 jmp     cs:off_4B9D08
//
// Resolved target: netnode_kill
// Target address:  0x4BC728
// GOT/IAT slot:    0x4B9D08
// Slot symbol:     off_4B9D08
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


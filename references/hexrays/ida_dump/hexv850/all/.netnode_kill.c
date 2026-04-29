// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA70
// Name:            .netnode_kill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA70 jmp     cs:off_4C0D20
//
// Resolved target: netnode_kill
// Target address:  0x4C3D38
// GOT/IAT slot:    0x4C0D20
// Slot symbol:     off_4C0D20
// Target type:     <no type info>
// ============================================================

void .netnode_kill(/* see target signature */)
{
    // Tail-call to netnode_kill via GOT/IAT indirection
    return netnode_kill(/* forwarded args */);
}


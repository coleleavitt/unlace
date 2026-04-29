// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A950
// Name:            .netnode_start
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A950 jmp     cs:off_4CD490
//
// Resolved target: netnode_start
// Target address:  0x4CFE98
// GOT/IAT slot:    0x4CD490
// Slot symbol:     off_4CD490
// Target type:     <no type info>
// ============================================================

void .netnode_start(/* see target signature */)
{
    // Tail-call to netnode_start via GOT/IAT indirection
    return netnode_start(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE10
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE10 jmp     cs:off_4E96F0
//
// Resolved target: netnode_set
// Target address:  0x4EC108
// GOT/IAT slot:    0x4E96F0
// Slot symbol:     off_4E96F0
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}


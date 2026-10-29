// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115D30
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115D30 jmp     cs:netnode_set_ptr
//
// Resolved target: netnode_set
// Target address:  0x8D6200
// GOT/IAT slot:    0x8A1B38
// Slot symbol:     netnode_set_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}


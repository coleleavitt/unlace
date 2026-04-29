// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADF0
// Name:            .netnode_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADF0 jmp     cs:off_4DA6E0
//
// Resolved target: netnode_set
// Target address:  0x4DD0D8
// GOT/IAT slot:    0x4DA6E0
// Slot symbol:     off_4DA6E0
// Target type:     <no type info>
// ============================================================

void .netnode_set(/* see target signature */)
{
    // Tail-call to netnode_set via GOT/IAT indirection
    return netnode_set(/* forwarded args */);
}


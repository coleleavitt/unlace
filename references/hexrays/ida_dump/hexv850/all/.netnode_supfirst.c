// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AEF0
// Name:            .netnode_supfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AEF0 jmp     cs:off_4C0760
//
// Resolved target: netnode_supfirst
// Target address:  0x4C3750
// GOT/IAT slot:    0x4C0760
// Slot symbol:     off_4C0760
// Target type:     <no type info>
// ============================================================

void .netnode_supfirst(/* see target signature */)
{
    // Tail-call to netnode_supfirst via GOT/IAT indirection
    return netnode_supfirst(/* forwarded args */);
}


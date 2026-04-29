// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD30
// Name:            .netnode_delvalue
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD30 jmp     cs:off_4CD680
//
// Resolved target: netnode_delvalue
// Target address:  0x4D0098
// GOT/IAT slot:    0x4CD680
// Slot symbol:     off_4CD680
// Target type:     <no type info>
// ============================================================

void .netnode_delvalue(/* see target signature */)
{
    // Tail-call to netnode_delvalue via GOT/IAT indirection
    return netnode_delvalue(/* forwarded args */);
}


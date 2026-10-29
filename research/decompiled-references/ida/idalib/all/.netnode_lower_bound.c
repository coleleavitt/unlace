// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8040
// Name:            .netnode_lower_bound
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8040 jmp     cs:off_2C79808
//
// Resolved target: netnode_lower_bound
// Target address:  0x7BEB20
// GOT/IAT slot:    0x2C79808
// Slot symbol:     off_2C79808
// Target type:     <no type info>
// ============================================================

void .netnode_lower_bound(/* see target signature */)
{
    // Tail-call to netnode_lower_bound via GOT/IAT indirection
    return netnode_lower_bound(/* forwarded args */);
}


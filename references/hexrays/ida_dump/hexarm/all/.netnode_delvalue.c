// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD50
// Name:            .netnode_delvalue
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD50 jmp     cs:off_4E9690
//
// Resolved target: netnode_delvalue
// Target address:  0x4EC0A8
// GOT/IAT slot:    0x4E9690
// Slot symbol:     off_4E9690
// Target type:     <no type info>
// ============================================================

void .netnode_delvalue(/* see target signature */)
{
    // Tail-call to netnode_delvalue via GOT/IAT indirection
    return netnode_delvalue(/* forwarded args */);
}


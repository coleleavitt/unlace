// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD80
// Name:            .netnode_delvalue
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD80 jmp     cs:off_4ED6A8
//
// Resolved target: netnode_delvalue
// Target address:  0x4F19B8
// GOT/IAT slot:    0x4ED6A8
// Slot symbol:     off_4ED6A8
// Target type:     <no type info>
// ============================================================

void .netnode_delvalue(/* see target signature */)
{
    // Tail-call to netnode_delvalue via GOT/IAT indirection
    return netnode_delvalue(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D980
// Name:            .netnode_get_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D980 jmp     cs:off_4E94A8
//
// Resolved target: netnode_get_name
// Target address:  0x4EBEB0
// GOT/IAT slot:    0x4E94A8
// Slot symbol:     off_4E94A8
// Target type:     <no type info>
// ============================================================

void .netnode_get_name(/* see target signature */)
{
    // Tail-call to netnode_get_name via GOT/IAT indirection
    return netnode_get_name(/* forwarded args */);
}


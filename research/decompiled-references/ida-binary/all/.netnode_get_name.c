// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118130
// Name:            .netnode_get_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118130 jmp     cs:netnode_get_name_ptr
//
// Resolved target: netnode_get_name
// Target address:  0x8D78E8
// GOT/IAT slot:    0x8A2D38
// Slot symbol:     netnode_get_name_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_get_name(/* see target signature */)
{
    // Tail-call to netnode_get_name via GOT/IAT indirection
    return netnode_get_name(/* forwarded args */);
}


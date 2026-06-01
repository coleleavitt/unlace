// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113590
// Name:            .netnode_exist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113590 jmp     cs:netnode_exist_ptr
//
// Resolved target: netnode_exist
// Target address:  0x8D48B8
// GOT/IAT slot:    0x8A0768
// Slot symbol:     netnode_exist_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_exist(/* see target signature */)
{
    // Tail-call to netnode_exist via GOT/IAT indirection
    return netnode_exist(/* forwarded args */);
}


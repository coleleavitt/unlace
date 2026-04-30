// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F80
// Name:            .netnode_inited
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F80 jmp     cs:netnode_inited_ptr
//
// Resolved target: netnode_inited
// Target address:  0x8D6380
// GOT/IAT slot:    0x8A1C60
// Slot symbol:     netnode_inited_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_inited(/* see target signature */)
{
    // Tail-call to netnode_inited via GOT/IAT indirection
    return netnode_inited(/* forwarded args */);
}


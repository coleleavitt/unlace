// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1142F0
// Name:            .netnode_supstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1142F0 jmp     cs:netnode_supstr_ptr
//
// Resolved target: netnode_supstr
// Target address:  0x8D5130
// GOT/IAT slot:    0x8A0E18
// Slot symbol:     netnode_supstr_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_supstr(/* see target signature */)
{
    // Tail-call to netnode_supstr via GOT/IAT indirection
    return netnode_supstr(/* forwarded args */);
}


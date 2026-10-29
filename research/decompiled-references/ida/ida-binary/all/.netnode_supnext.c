// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1171E0
// Name:            .netnode_supnext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1171E0 jmp     cs:netnode_supnext_ptr
//
// Resolved target: netnode_supnext
// Target address:  0x8D6F00
// GOT/IAT slot:    0x8A2590
// Slot symbol:     netnode_supnext_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_supnext(/* see target signature */)
{
    // Tail-call to netnode_supnext via GOT/IAT indirection
    return netnode_supnext(/* forwarded args */);
}


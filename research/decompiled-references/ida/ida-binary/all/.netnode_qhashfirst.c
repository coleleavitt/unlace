// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1146D0
// Name:            .netnode_qhashfirst
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1146D0 jmp     cs:netnode_qhashfirst_ptr
//
// Resolved target: netnode_qhashfirst
// Target address:  0x8D53B0
// GOT/IAT slot:    0x8A1008
// Slot symbol:     netnode_qhashfirst_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_qhashfirst(/* see target signature */)
{
    // Tail-call to netnode_qhashfirst via GOT/IAT indirection
    return netnode_qhashfirst(/* forwarded args */);
}


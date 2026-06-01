// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1119F0
// Name:            .netnode_supval
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1119F0 jmp     cs:netnode_supval_ptr
//
// Resolved target: netnode_supval
// Target address:  0x8D3700
// GOT/IAT slot:    0x89F998
// Slot symbol:     netnode_supval_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_supval(/* see target signature */)
{
    // Tail-call to netnode_supval via GOT/IAT indirection
    return netnode_supval(/* forwarded args */);
}


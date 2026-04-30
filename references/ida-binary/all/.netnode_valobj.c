// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112BC0
// Name:            .netnode_valobj
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112BC0 jmp     cs:netnode_valobj_ptr
//
// Resolved target: netnode_valobj
// Target address:  0x8D4240
// GOT/IAT slot:    0x8A0280
// Slot symbol:     netnode_valobj_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_valobj(/* see target signature */)
{
    // Tail-call to netnode_valobj via GOT/IAT indirection
    return netnode_valobj(/* forwarded args */);
}


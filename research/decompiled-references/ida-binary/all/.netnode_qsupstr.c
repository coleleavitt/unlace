// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111600
// Name:            .netnode_qsupstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111600 jmp     cs:netnode_qsupstr_ptr
//
// Resolved target: netnode_qsupstr
// Target address:  0x8D3468
// GOT/IAT slot:    0x89F7A0
// Slot symbol:     netnode_qsupstr_ptr
// Target type:     <no type info>
// ============================================================

void .netnode_qsupstr(/* see target signature */)
{
    // Tail-call to netnode_qsupstr via GOT/IAT indirection
    return netnode_qsupstr(/* forwarded args */);
}


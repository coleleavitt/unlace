// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118A70
// Name:            .reg_subkey_children
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118A70 jmp     cs:reg_subkey_children_ptr
//
// Resolved target: reg_subkey_children
// Target address:  0x8D7E70
// GOT/IAT slot:    0x8A31D8
// Slot symbol:     reg_subkey_children_ptr
// Target type:     <no type info>
// ============================================================

void .reg_subkey_children(/* see target signature */)
{
    // Tail-call to reg_subkey_children via GOT/IAT indirection
    return reg_subkey_children(/* forwarded args */);
}


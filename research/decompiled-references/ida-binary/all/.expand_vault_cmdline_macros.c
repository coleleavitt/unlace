// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112A60
// Name:            .expand_vault_cmdline_macros
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112A60 jmp     cs:expand_vault_cmdline_macros_ptr
//
// Resolved target: expand_vault_cmdline_macros
// Target address:  0x8D4158
// GOT/IAT slot:    0x8A01D0
// Slot symbol:     expand_vault_cmdline_macros_ptr
// Target type:     <no type info>
// ============================================================

void .expand_vault_cmdline_macros(/* see target signature */)
{
    // Tail-call to expand_vault_cmdline_macros via GOT/IAT indirection
    return expand_vault_cmdline_macros(/* forwarded args */);
}


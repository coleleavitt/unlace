// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AB90
// Name:            .vault_errstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AB90 jmp     cs:vault_errstr_ptr
//
// Resolved target: vault_errstr
// Target address:  0x8D9378
// GOT/IAT slot:    0x8A4268
// Slot symbol:     vault_errstr_ptr
// Target type:     <no type info>
// ============================================================

void .vault_errstr(/* see target signature */)
{
    // Tail-call to vault_errstr via GOT/IAT indirection
    return vault_errstr(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113050
// Name:            .reg_subkey_exists
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113050 jmp     cs:reg_subkey_exists_ptr
//
// Resolved target: reg_subkey_exists
// Target address:  0x8D4558
// GOT/IAT slot:    0x8A04C8
// Slot symbol:     reg_subkey_exists_ptr
// Target type:     <no type info>
// ============================================================

void .reg_subkey_exists(/* see target signature */)
{
    // Tail-call to reg_subkey_exists via GOT/IAT indirection
    return reg_subkey_exists(/* forwarded args */);
}


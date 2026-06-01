// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A84F0
// Name:            .reg_subkey_exists
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A84F0 jmp     cs:off_2C79A60
//
// Resolved target: reg_subkey_exists
// Target address:  0x854AE0
// GOT/IAT slot:    0x2C79A60
// Slot symbol:     off_2C79A60
// Target type:     <no type info>
// ============================================================

void .reg_subkey_exists(/* see target signature */)
{
    // Tail-call to reg_subkey_exists via GOT/IAT indirection
    return reg_subkey_exists(/* forwarded args */);
}


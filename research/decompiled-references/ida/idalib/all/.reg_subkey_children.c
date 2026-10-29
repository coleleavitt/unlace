// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC90
// Name:            .reg_subkey_children
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC90 jmp     cs:off_2C7B630
//
// Resolved target: reg_subkey_children
// Target address:  0x854D50
// GOT/IAT slot:    0x2C7B630
// Slot symbol:     off_2C7B630
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .reg_subkey_children(/* see target signature */)
{
    // Tail-call to reg_subkey_children via GOT/IAT indirection
    return reg_subkey_children(/* forwarded args */);
}


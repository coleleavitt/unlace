// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB60
// Name:            .reg_str_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB60 jmp     cs:off_2C7C598
//
// Resolved target: reg_str_get
// Target address:  0x854790
// GOT/IAT slot:    0x2C7C598
// Slot symbol:     off_2C7C598
// Target type:     <no type info>
// ============================================================

void .reg_str_get(/* see target signature */)
{
    // Tail-call to reg_str_get via GOT/IAT indirection
    return reg_str_get(/* forwarded args */);
}


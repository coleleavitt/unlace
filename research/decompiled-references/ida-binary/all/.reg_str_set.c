// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A9C0
// Name:            .reg_str_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A9C0 jmp     cs:reg_str_set_ptr
//
// Resolved target: reg_str_set
// Target address:  0x8D9268
// GOT/IAT slot:    0x8A4180
// Slot symbol:     reg_str_set_ptr
// Target type:     <no type info>
// ============================================================

void .reg_str_set(/* see target signature */)
{
    // Tail-call to reg_str_set via GOT/IAT indirection
    return reg_str_set(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC60
// Name:            .reg_str_get
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC60 jmp     cs:reg_str_get_ptr
//
// Resolved target: reg_str_get
// Target address:  0x8D9DF8
// GOT/IAT slot:    0x8A4AD0
// Slot symbol:     reg_str_get_ptr
// Target type:     <no type info>
// ============================================================

void .reg_str_get(/* see target signature */)
{
    // Tail-call to reg_str_get via GOT/IAT indirection
    return reg_str_get(/* forwarded args */);
}


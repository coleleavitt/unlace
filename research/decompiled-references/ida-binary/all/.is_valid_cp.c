// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112740
// Name:            .is_valid_cp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112740 jmp     cs:is_valid_cp_ptr
//
// Resolved target: is_valid_cp
// Target address:  0x8D3F88
// GOT/IAT slot:    0x8A0040
// Slot symbol:     is_valid_cp_ptr
// Target type:     <no type info>
// ============================================================

void .is_valid_cp(/* see target signature */)
{
    // Tail-call to is_valid_cp via GOT/IAT indirection
    return is_valid_cp(/* forwarded args */);
}


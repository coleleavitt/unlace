// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113EC0
// Name:            .get_error_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113EC0 jmp     cs:get_error_string_ptr
//
// Resolved target: get_error_string
// Target address:  0x8D4EB8
// GOT/IAT slot:    0x8A0C00
// Slot symbol:     get_error_string_ptr
// Target type:     <no type info>
// ============================================================

void .get_error_string(/* see target signature */)
{
    // Tail-call to get_error_string via GOT/IAT indirection
    return get_error_string(/* forwarded args */);
}


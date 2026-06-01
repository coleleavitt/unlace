// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118420
// Name:            .set_error_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118420 jmp     cs:set_error_string_ptr
//
// Resolved target: set_error_string
// Target address:  0x8D7A90
// GOT/IAT slot:    0x8A2EB0
// Slot symbol:     set_error_string_ptr
// Target type:     <no type info>
// ============================================================

void .set_error_string(/* see target signature */)
{
    // Tail-call to set_error_string via GOT/IAT indirection
    return set_error_string(/* forwarded args */);
}


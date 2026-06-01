// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8ED0
// Name:            .get_error_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8ED0 jmp     cs:off_2C79F50
//
// Resolved target: get_error_string
// Target address:  0x82F020
// GOT/IAT slot:    0x2C79F50
// Slot symbol:     off_2C79F50
// Target type:     <no type info>
// ============================================================

void .get_error_string(/* see target signature */)
{
    // Tail-call to get_error_string via GOT/IAT indirection
    return get_error_string(/* forwarded args */);
}


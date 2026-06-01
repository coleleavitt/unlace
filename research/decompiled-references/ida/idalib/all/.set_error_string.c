// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB8B0
// Name:            .set_error_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB8B0 jmp     cs:off_2C7B440
//
// Resolved target: set_error_string
// Target address:  0x82EE40
// GOT/IAT slot:    0x2C7B440
// Slot symbol:     off_2C7B440
// Target type:     <no type info>
// ============================================================

void .set_error_string(/* see target signature */)
{
    // Tail-call to set_error_string via GOT/IAT indirection
    return set_error_string(/* forwarded args */);
}


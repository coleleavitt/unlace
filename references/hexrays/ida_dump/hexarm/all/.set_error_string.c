// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E340
// Name:            .set_error_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E340 jmp     cs:off_4E9988
//
// Resolved target: set_error_string
// Target address:  0x4EC3A8
// GOT/IAT slot:    0x4E9988
// Slot symbol:     off_4E9988
// Target type:     <no type info>
// ============================================================

void .set_error_string(/* see target signature */)
{
    // Tail-call to set_error_string via GOT/IAT indirection
    return set_error_string(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40B0
// Name:            .Z3_set_error_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40B0 jmp     cs:off_4E040
//
// Resolved target: Z3_set_error_handler
// Target address:  0x4F640
// GOT/IAT slot:    0x4E040
// Slot symbol:     off_4E040
// Target type:     <no type info>
// ============================================================

void .Z3_set_error_handler(/* see target signature */)
{
    // Tail-call to Z3_set_error_handler via GOT/IAT indirection
    return Z3_set_error_handler(/* forwarded args */);
}


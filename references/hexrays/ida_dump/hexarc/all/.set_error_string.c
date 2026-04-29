// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A300
// Name:            .set_error_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A300 jmp     cs:off_4B9968
//
// Resolved target: set_error_string
// Target address:  0x4BC368
// GOT/IAT slot:    0x4B9968
// Slot symbol:     off_4B9968
// Target type:     <no type info>
// ============================================================

void .set_error_string(/* see target signature */)
{
    // Tail-call to set_error_string via GOT/IAT indirection
    return set_error_string(/* forwarded args */);
}


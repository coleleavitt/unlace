// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C3C0
// Name:            .set_error_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C3C0 jmp     cs:off_4ED9C8
//
// Resolved target: set_error_string
// Target address:  0x4F1CE8
// GOT/IAT slot:    0x4ED9C8
// Slot symbol:     off_4ED9C8
// Target type:     <no type info>
// ============================================================

void .set_error_string(/* see target signature */)
{
    // Tail-call to set_error_string via GOT/IAT indirection
    return set_error_string(/* forwarded args */);
}


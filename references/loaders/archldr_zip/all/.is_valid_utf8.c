// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2030
// Name:            .is_valid_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2030 jmp     cs:off_8000
//
// Resolved target: is_valid_utf8
// Target address:  0x81C0
// GOT/IAT slot:    0x8000
// Slot symbol:     off_8000
// Target type:     <no type info>
// ============================================================

void .is_valid_utf8(/* see target signature */)
{
    // Tail-call to is_valid_utf8 via GOT/IAT indirection
    return is_valid_utf8(/* forwarded args */);
}


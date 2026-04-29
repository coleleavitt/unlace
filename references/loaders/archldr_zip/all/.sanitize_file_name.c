// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21D0
// Name:            .sanitize_file_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21D0 jmp     cs:off_80D0
//
// Resolved target: sanitize_file_name
// Target address:  0x82A0
// GOT/IAT slot:    0x80D0
// Slot symbol:     off_80D0
// Target type:     <no type info>
// ============================================================

void .sanitize_file_name(/* see target signature */)
{
    // Tail-call to sanitize_file_name via GOT/IAT indirection
    return sanitize_file_name(/* forwarded args */);
}


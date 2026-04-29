// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B310
// Name:            .sanitize_file_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B310 jmp     cs:off_4CD970
//
// Resolved target: sanitize_file_name
// Target address:  0x4D0390
// GOT/IAT slot:    0x4CD970
// Slot symbol:     off_4CD970
// Target type:     <no type info>
// ============================================================

void .sanitize_file_name(/* see target signature */)
{
    // Tail-call to sanitize_file_name via GOT/IAT indirection
    return sanitize_file_name(/* forwarded args */);
}


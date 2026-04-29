// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A310
// Name:            .sanitize_file_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A310 jmp     cs:off_4B9970
//
// Resolved target: sanitize_file_name
// Target address:  0x4BC370
// GOT/IAT slot:    0x4B9970
// Slot symbol:     off_4B9970
// Target type:     <no type info>
// ============================================================

void .sanitize_file_name(/* see target signature */)
{
    // Tail-call to sanitize_file_name via GOT/IAT indirection
    return sanitize_file_name(/* forwarded args */);
}


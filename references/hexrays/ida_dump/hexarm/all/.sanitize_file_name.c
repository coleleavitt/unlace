// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E350
// Name:            .sanitize_file_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E350 jmp     cs:off_4E9990
//
// Resolved target: sanitize_file_name
// Target address:  0x4EC3B0
// GOT/IAT slot:    0x4E9990
// Slot symbol:     off_4E9990
// Target type:     <no type info>
// ============================================================

void .sanitize_file_name(/* see target signature */)
{
    // Tail-call to sanitize_file_name via GOT/IAT indirection
    return sanitize_file_name(/* forwarded args */);
}


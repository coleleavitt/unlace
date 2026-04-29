// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B310
// Name:            .sanitize_file_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B310 jmp     cs:off_4BF970
//
// Resolved target: sanitize_file_name
// Target address:  0x4C2E68
// GOT/IAT slot:    0x4BF970
// Slot symbol:     off_4BF970
// Target type:     <no type info>
// ============================================================

void .sanitize_file_name(/* see target signature */)
{
    // Tail-call to sanitize_file_name via GOT/IAT indirection
    return sanitize_file_name(/* forwarded args */);
}


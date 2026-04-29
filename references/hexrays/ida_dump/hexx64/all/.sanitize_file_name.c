// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C3D0
// Name:            .sanitize_file_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C3D0 jmp     cs:off_4ED9D0
//
// Resolved target: sanitize_file_name
// Target address:  0x4F1CF0
// GOT/IAT slot:    0x4ED9D0
// Slot symbol:     off_4ED9D0
// Target type:     <no type info>
// ============================================================

void .sanitize_file_name(/* see target signature */)
{
    // Tail-call to sanitize_file_name via GOT/IAT indirection
    return sanitize_file_name(/* forwarded args */);
}


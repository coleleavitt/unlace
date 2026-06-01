// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A9F0
// Name:            .sanitize_file_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A9F0 jmp     cs:sanitize_file_name_ptr
//
// Resolved target: sanitize_file_name
// Target address:  0x8D9290
// GOT/IAT slot:    0x8A4198
// Slot symbol:     sanitize_file_name_ptr
// Target type:     <no type info>
// ============================================================

void .sanitize_file_name(/* see target signature */)
{
    // Tail-call to sanitize_file_name via GOT/IAT indirection
    return sanitize_file_name(/* forwarded args */);
}


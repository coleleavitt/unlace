// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD080
// Name:            .sanitize_file_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD080 jmp     cs:off_2C7C028
//
// Resolved target: sanitize_file_name
// Target address:  0x83E4A0
// GOT/IAT slot:    0x2C7C028
// Slot symbol:     off_2C7C028
// Target type:     __int64 __fastcall(char *s)
// ============================================================

/* see target sig */ .sanitize_file_name(/* see target signature */)
{
    // Tail-call to sanitize_file_name via GOT/IAT indirection
    return sanitize_file_name(/* forwarded args */);
}


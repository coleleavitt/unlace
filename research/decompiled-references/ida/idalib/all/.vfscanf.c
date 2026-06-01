// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD10
// Name:            .vfscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD10 jmp     cs:off_2C7AE70
//
// Resolved target: vfscanf
// Target address:  0x2D11A40
// GOT/IAT slot:    0x2C7AE70
// Slot symbol:     off_2C7AE70
// Target type:     int(FILE *s, const char *format, __gnuc_va_list arg)
// ============================================================

/* see target sig */ .vfscanf(/* see target signature */)
{
    // Tail-call to vfscanf via GOT/IAT indirection
    return vfscanf(/* forwarded args */);
}


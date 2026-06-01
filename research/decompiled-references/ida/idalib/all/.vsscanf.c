// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A50
// Name:            .vsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A50 jmp     cs:off_2C79D10
//
// Resolved target: vsscanf
// Target address:  0x2D11658
// GOT/IAT slot:    0x2C79D10
// Slot symbol:     off_2C79D10
// Target type:     int(const char *s, const char *format, __gnuc_va_list arg)
// ============================================================

/* see target sig */ .vsscanf(/* see target signature */)
{
    // Tail-call to vsscanf via GOT/IAT indirection
    return vsscanf(/* forwarded args */);
}


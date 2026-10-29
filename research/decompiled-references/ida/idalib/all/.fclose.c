// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A82D0
// Name:            .fclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A82D0 jmp     cs:off_2C79950
//
// Resolved target: fclose
// Target address:  0x2D11558
// GOT/IAT slot:    0x2C79950
// Slot symbol:     off_2C79950
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fclose(/* see target signature */)
{
    // Tail-call to fclose via GOT/IAT indirection
    return fclose(/* forwarded args */);
}


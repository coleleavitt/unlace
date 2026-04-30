// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112D20
// Name:            .fclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112D20 jmp     cs:fclose_ptr
//
// Resolved target: fclose
// Target address:  0x8D4348
// GOT/IAT slot:    0x8A0330
// Slot symbol:     fclose_ptr
// Target type:     int(FILE *stream)
// ============================================================

/* see target sig */ .fclose(/* see target signature */)
{
    // Tail-call to fclose via GOT/IAT indirection
    return fclose(/* forwarded args */);
}


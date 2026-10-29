// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB30
// Name:            .qstrtok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB30 jmp     cs:off_2C7B580
//
// Resolved target: qstrtok
// Target address:  0x841A20
// GOT/IAT slot:    0x2C7B580
// Slot symbol:     off_2C7B580
// Target type:     __int64 __fastcall(char *s, char *accept)
// ============================================================

/* see target sig */ .qstrtok(/* see target signature */)
{
    // Tail-call to qstrtok via GOT/IAT indirection
    return qstrtok(/* forwarded args */);
}


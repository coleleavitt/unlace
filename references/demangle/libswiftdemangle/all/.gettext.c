// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA1D0
// Name:            .gettext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA1D0 jmp     cs:off_480E8
//
// Resolved target: gettext
// Target address:  0x48450
// GOT/IAT slot:    0x480E8
// Slot symbol:     off_480E8
// Target type:     char *(const char *msgid)
// ============================================================

/* see target sig */ .gettext(/* see target signature */)
{
    // Tail-call to gettext via GOT/IAT indirection
    return gettext(/* forwarded args */);
}


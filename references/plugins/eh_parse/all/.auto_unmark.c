// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6850
// Name:            .auto_unmark
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6850 jmp     cs:off_2F410
//
// Resolved target: auto_unmark
// Target address:  0x2FA90
// GOT/IAT slot:    0x2F410
// Slot symbol:     off_2F410
// Target type:     <no type info>
// ============================================================

void .auto_unmark(/* see target signature */)
{
    // Tail-call to auto_unmark via GOT/IAT indirection
    return auto_unmark(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9720
// Name:            .skip_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9720 jmp     cs:off_2C7A378
//
// Resolved target: skip_utf8
// Target address:  0x82CEC0
// GOT/IAT slot:    0x2C7A378
// Slot symbol:     off_2C7A378
// Target type:     <no type info>
// ============================================================

void .skip_utf8(/* see target signature */)
{
    // Tail-call to skip_utf8 via GOT/IAT indirection
    return skip_utf8(/* forwarded args */);
}


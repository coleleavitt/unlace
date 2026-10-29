// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC820
// Name:            .set_header_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC820 jmp     cs:off_2C7BBF8
//
// Resolved target: set_header_path
// Target address:  0x7A0840
// GOT/IAT slot:    0x2C7BBF8
// Slot symbol:     off_2C7BBF8
// Target type:     <no type info>
// ============================================================

void .set_header_path(/* see target signature */)
{
    // Tail-call to set_header_path via GOT/IAT indirection
    return set_header_path(/* forwarded args */);
}


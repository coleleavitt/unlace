// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29AA0
// Name:            .display_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29AA0 jmp     cs:off_4B9538
//
// Resolved target: display_gdl
// Target address:  0x4BBF20
// GOT/IAT slot:    0x4B9538
// Slot symbol:     off_4B9538
// Target type:     <no type info>
// ============================================================

void .display_gdl(/* see target signature */)
{
    // Tail-call to display_gdl via GOT/IAT indirection
    return display_gdl(/* forwarded args */);
}


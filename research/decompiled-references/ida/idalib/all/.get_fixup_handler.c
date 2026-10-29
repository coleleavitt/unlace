// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7300
// Name:            .get_fixup_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7300 jmp     cs:off_2C79168
//
// Resolved target: get_fixup_handler
// Target address:  0x41B210
// GOT/IAT slot:    0x2C79168
// Slot symbol:     off_2C79168
// Target type:     <no type info>
// ============================================================

void .get_fixup_handler(/* see target signature */)
{
    // Tail-call to get_fixup_handler via GOT/IAT indirection
    return get_fixup_handler(/* forwarded args */);
}


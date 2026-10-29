// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F30
// Name:            .set_debug_event_code
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F30 jmp     cs:off_2C7A780
//
// Resolved target: set_debug_event_code
// Target address:  0x82ACF0
// GOT/IAT slot:    0x2C7A780
// Slot symbol:     off_2C7A780
// Target type:     <no type info>
// ============================================================

void .set_debug_event_code(/* see target signature */)
{
    // Tail-call to set_debug_event_code via GOT/IAT indirection
    return set_debug_event_code(/* forwarded args */);
}


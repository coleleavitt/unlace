// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AADF0
// Name:            .unbind_event_handler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AADF0 jmp     cs:off_2C7AEE0
//
// Resolved target: unbind_event_handler
// Target address:  0x82F700
// GOT/IAT slot:    0x2C7AEE0
// Slot symbol:     off_2C7AEE0
// Target type:     <no type info>
// ============================================================

void .unbind_event_handler(/* see target signature */)
{
    // Tail-call to unbind_event_handler via GOT/IAT indirection
    return unbind_event_handler(/* forwarded args */);
}


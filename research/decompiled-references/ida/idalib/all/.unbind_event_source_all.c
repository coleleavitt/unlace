// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB70
// Name:            .unbind_event_source_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB70 jmp     cs:off_2C7B5A0
//
// Resolved target: unbind_event_source_all
// Target address:  0x82F590
// GOT/IAT slot:    0x2C7B5A0
// Slot symbol:     off_2C7B5A0
// Target type:     <no type info>
// ============================================================

void .unbind_event_source_all(/* see target signature */)
{
    // Tail-call to unbind_event_source_all via GOT/IAT indirection
    return unbind_event_source_all(/* forwarded args */);
}


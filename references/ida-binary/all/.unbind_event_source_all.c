// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118920
// Name:            .unbind_event_source_all
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118920 jmp     cs:unbind_event_source_all_ptr
//
// Resolved target: unbind_event_source_all
// Target address:  0x8D7D98
// GOT/IAT slot:    0x8A3130
// Slot symbol:     unbind_event_source_all_ptr
// Target type:     <no type info>
// ============================================================

void .unbind_event_source_all(/* see target signature */)
{
    // Tail-call to unbind_event_source_all via GOT/IAT indirection
    return unbind_event_source_all(/* forwarded args */);
}


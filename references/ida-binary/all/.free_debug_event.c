// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117780
// Name:            .free_debug_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117780 jmp     cs:free_debug_event_ptr
//
// Resolved target: free_debug_event
// Target address:  0x8D72B0
// GOT/IAT slot:    0x8A2860
// Slot symbol:     free_debug_event_ptr
// Target type:     <no type info>
// ============================================================

void .free_debug_event(/* see target signature */)
{
    // Tail-call to free_debug_event via GOT/IAT indirection
    return free_debug_event(/* forwarded args */);
}


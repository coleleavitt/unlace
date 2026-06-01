// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB040
// Name:            .free_debug_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB040 jmp     cs:off_2C7B008
//
// Resolved target: free_debug_event
// Target address:  0x82AC60
// GOT/IAT slot:    0x2C7B008
// Slot symbol:     off_2C7B008
// Target type:     <no type info>
// ============================================================

void .free_debug_event(/* see target signature */)
{
    // Tail-call to free_debug_event via GOT/IAT indirection
    return free_debug_event(/* forwarded args */);
}


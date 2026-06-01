// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1127C0
// Name:            .copy_debug_event
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1127C0 jmp     cs:copy_debug_event_ptr
//
// Resolved target: copy_debug_event
// Target address:  0x8D3FE0
// GOT/IAT slot:    0x8A0080
// Slot symbol:     copy_debug_event_ptr
// Target type:     <no type info>
// ============================================================

void .copy_debug_event(/* see target signature */)
{
    // Tail-call to copy_debug_event via GOT/IAT indirection
    return copy_debug_event(/* forwarded args */);
}


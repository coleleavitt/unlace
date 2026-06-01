// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115A40
// Name:            .set_debug_event_code
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115A40 jmp     cs:set_debug_event_code_ptr
//
// Resolved target: set_debug_event_code
// Target address:  0x8D6028
// GOT/IAT slot:    0x8A19C0
// Slot symbol:     set_debug_event_code_ptr
// Target type:     <no type info>
// ============================================================

void .set_debug_event_code(/* see target signature */)
{
    // Tail-call to set_debug_event_code via GOT/IAT indirection
    return set_debug_event_code(/* forwarded args */);
}


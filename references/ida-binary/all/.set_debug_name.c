// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1193A0
// Name:            .set_debug_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1193A0 jmp     cs:set_debug_name_ptr
//
// Resolved target: set_debug_name
// Target address:  0x8D8420
// GOT/IAT slot:    0x8A3670
// Slot symbol:     set_debug_name_ptr
// Target type:     <no type info>
// ============================================================

void .set_debug_name(/* see target signature */)
{
    // Tail-call to set_debug_name via GOT/IAT indirection
    return set_debug_name(/* forwarded args */);
}


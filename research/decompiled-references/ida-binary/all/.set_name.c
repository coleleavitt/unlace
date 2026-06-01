// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BBD0
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BBD0 jmp     cs:set_name_ptr
//
// Resolved target: set_name
// Target address:  0x8D9D98
// GOT/IAT slot:    0x8A4A88
// Slot symbol:     set_name_ptr
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}


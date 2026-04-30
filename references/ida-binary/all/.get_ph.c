// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180D0
// Name:            .get_ph
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180D0 jmp     cs:get_ph_ptr
//
// Resolved target: get_ph
// Target address:  0x8D78A0
// GOT/IAT slot:    0x8A2D08
// Slot symbol:     get_ph_ptr
// Target type:     <no type info>
// ============================================================

void .get_ph(/* see target signature */)
{
    // Tail-call to get_ph via GOT/IAT indirection
    return get_ph(/* forwarded args */);
}


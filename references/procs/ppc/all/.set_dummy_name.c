// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F10
// Name:            .set_dummy_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F10 jmp     cs:off_95770
//
// Resolved target: set_dummy_name
// Target address:  0x961C0
// GOT/IAT slot:    0x95770
// Slot symbol:     off_95770
// Target type:     <no type info>
// ============================================================

void .set_dummy_name(/* see target signature */)
{
    // Tail-call to set_dummy_name via GOT/IAT indirection
    return set_dummy_name(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AE10
// Name:            .set_default_dataseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AE10 jmp     cs:set_default_dataseg_ptr
//
// Resolved target: set_default_dataseg
// Target address:  0x8D9510
// GOT/IAT slot:    0x8A43A8
// Slot symbol:     set_default_dataseg_ptr
// Target type:     <no type info>
// ============================================================

void .set_default_dataseg(/* see target signature */)
{
    // Tail-call to set_default_dataseg via GOT/IAT indirection
    return set_default_dataseg(/* forwarded args */);
}


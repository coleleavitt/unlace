// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_A0F8
//
// Resolved target: set_processor_type
// Target address:  0xA3A8
// GOT/IAT slot:    0xA0F8
// Slot symbol:     off_A0F8
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


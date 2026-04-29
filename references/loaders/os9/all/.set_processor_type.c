// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1140
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1140 jmp     cs:off_4088
//
// Resolved target: set_processor_type
// Target address:  0x41A0
// GOT/IAT slot:    0x4088
// Slot symbol:     off_4088
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


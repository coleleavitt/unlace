// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC000
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC000 jmp     cs:off_2C7B7E8
//
// Resolved target: set_processor_type
// Target address:  0x39E370
// GOT/IAT slot:    0x2C7B7E8
// Slot symbol:     off_2C7B7E8
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


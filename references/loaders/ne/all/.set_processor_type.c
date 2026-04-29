// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_B150
//
// Resolved target: set_processor_type
// Target address:  0xB3E8
// GOT/IAT slot:    0xB150
// Slot symbol:     off_B150
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


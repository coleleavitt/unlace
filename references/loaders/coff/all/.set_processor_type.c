// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x44E0
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x44E0 jmp     cs:off_23258
//
// Resolved target: set_processor_type
// Target address:  0x23678
// GOT/IAT slot:    0x23258
// Slot symbol:     off_23258
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


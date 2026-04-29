// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23F0
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23F0 jmp     cs:off_B1E0
//
// Resolved target: set_processor_type
// Target address:  0xB678
// GOT/IAT slot:    0xB1E0
// Slot symbol:     off_B1E0
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


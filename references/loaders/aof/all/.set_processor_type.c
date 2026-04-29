// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_70E8
//
// Resolved target: set_processor_type
// Target address:  0x72A0
// GOT/IAT slot:    0x70E8
// Slot symbol:     off_70E8
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


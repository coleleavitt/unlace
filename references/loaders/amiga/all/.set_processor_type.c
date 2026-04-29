// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_5090
//
// Resolved target: set_processor_type
// Target address:  0x51C8
// GOT/IAT slot:    0x5090
// Slot symbol:     off_5090
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


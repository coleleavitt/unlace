// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_4028
//
// Resolved target: set_processor_type
// Target address:  0x40C0
// GOT/IAT slot:    0x4028
// Slot symbol:     off_4028
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


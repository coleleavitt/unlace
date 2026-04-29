// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_8148
//
// Resolved target: set_processor_type
// Target address:  0x83A8
// GOT/IAT slot:    0x8148
// Slot symbol:     off_8148
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


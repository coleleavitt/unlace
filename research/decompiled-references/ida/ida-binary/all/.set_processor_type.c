// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118F50
// Name:            .set_processor_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118F50 jmp     cs:set_processor_type_ptr
//
// Resolved target: set_processor_type
// Target address:  0x8D8150
// GOT/IAT slot:    0x8A3448
// Slot symbol:     set_processor_type_ptr
// Target type:     <no type info>
// ============================================================

void .set_processor_type(/* see target signature */)
{
    // Tail-call to set_processor_type via GOT/IAT indirection
    return set_processor_type(/* forwarded args */);
}


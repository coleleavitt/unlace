// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1121F0
// Name:            .deserialize_dynamic_register_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1121F0 jmp     cs:deserialize_dynamic_register_set_ptr
//
// Resolved target: deserialize_dynamic_register_set
// Target address:  0x8D3BF0
// GOT/IAT slot:    0x89FD98
// Slot symbol:     deserialize_dynamic_register_set_ptr
// Target type:     <no type info>
// ============================================================

void .deserialize_dynamic_register_set(/* see target signature */)
{
    // Tail-call to deserialize_dynamic_register_set via GOT/IAT indirection
    return deserialize_dynamic_register_set(/* forwarded args */);
}


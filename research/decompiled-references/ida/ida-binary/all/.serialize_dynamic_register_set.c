// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113170
// Name:            .serialize_dynamic_register_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113170 jmp     cs:serialize_dynamic_register_set_ptr
//
// Resolved target: serialize_dynamic_register_set
// Target address:  0x8D4600
// GOT/IAT slot:    0x8A0558
// Slot symbol:     serialize_dynamic_register_set_ptr
// Target type:     <no type info>
// ============================================================

void .serialize_dynamic_register_set(/* see target signature */)
{
    // Tail-call to serialize_dynamic_register_set via GOT/IAT indirection
    return serialize_dynamic_register_set(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116CB0
// Name:            .navstack_entry_t_deserialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116CB0 jmp     cs:navstack_entry_t_deserialize_ptr
//
// Resolved target: navstack_entry_t_deserialize
// Target address:  0x8D6BE0
// GOT/IAT slot:    0x8A22F8
// Slot symbol:     navstack_entry_t_deserialize_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_entry_t_deserialize(/* see target signature */)
{
    // Tail-call to navstack_entry_t_deserialize via GOT/IAT indirection
    return navstack_entry_t_deserialize(/* forwarded args */);
}


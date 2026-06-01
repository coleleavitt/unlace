// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B7C0
// Name:            .navstack_entry_t_serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B7C0 jmp     cs:navstack_entry_t_serialize_ptr
//
// Resolved target: navstack_entry_t_serialize
// Target address:  0x8D9B18
// GOT/IAT slot:    0x8A4880
// Slot symbol:     navstack_entry_t_serialize_ptr
// Target type:     <no type info>
// ============================================================

void .navstack_entry_t_serialize(/* see target signature */)
{
    // Tail-call to navstack_entry_t_serialize via GOT/IAT indirection
    return navstack_entry_t_serialize(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112190
// Name:            .set_type_choosable
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112190 jmp     cs:set_type_choosable_ptr
//
// Resolved target: set_type_choosable
// Target address:  0x8D3BC0
// GOT/IAT slot:    0x89FD68
// Slot symbol:     set_type_choosable_ptr
// Target type:     <no type info>
// ============================================================

void .set_type_choosable(/* see target signature */)
{
    // Tail-call to set_type_choosable via GOT/IAT indirection
    return set_type_choosable(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B3D0
// Name:            .is_type_choosable
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B3D0 jmp     cs:is_type_choosable_ptr
//
// Resolved target: is_type_choosable
// Target address:  0x8D98C0
// GOT/IAT slot:    0x8A4688
// Slot symbol:     is_type_choosable_ptr
// Target type:     <no type info>
// ============================================================

void .is_type_choosable(/* see target signature */)
{
    // Tail-call to is_type_choosable via GOT/IAT indirection
    return is_type_choosable(/* forwarded args */);
}


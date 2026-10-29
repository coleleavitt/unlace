// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A8F0
// Name:            .is_public_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A8F0 jmp     cs:is_public_name_ptr
//
// Resolved target: is_public_name
// Target address:  0x8D91E0
// GOT/IAT slot:    0x8A4118
// Slot symbol:     is_public_name_ptr
// Target type:     <no type info>
// ============================================================

void .is_public_name(/* see target signature */)
{
    // Tail-call to is_public_name via GOT/IAT indirection
    return is_public_name(/* forwarded args */);
}


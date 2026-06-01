// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF80
// Name:            .is_public_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF80 jmp     cs:off_2C7BFA8
//
// Resolved target: is_public_name
// Target address:  0x4CDEF0
// GOT/IAT slot:    0x2C7BFA8
// Slot symbol:     off_2C7BFA8
// Target type:     <no type info>
// ============================================================

void .is_public_name(/* see target signature */)
{
    // Tail-call to is_public_name via GOT/IAT indirection
    return is_public_name(/* forwarded args */);
}


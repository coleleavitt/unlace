// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A99F0
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A99F0 jmp     cs:off_2C7A4E0
//
// Resolved target: is_enum
// Target address:  0x3C5000
// GOT/IAT slot:    0x2C7A4E0
// Slot symbol:     off_2C7A4E0
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C000
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C000 jmp     cs:off_4BFFE8
//
// Resolved target: is_enum
// Target address:  0x4C3510
// GOT/IAT slot:    0x4BFFE8
// Slot symbol:     off_4BFFE8
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}


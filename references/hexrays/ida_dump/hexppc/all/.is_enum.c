// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C000
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C000 jmp     cs:off_4DAFE8
//
// Resolved target: is_enum
// Target address:  0x4DDA18
// GOT/IAT slot:    0x4DAFE8
// Slot symbol:     off_4DAFE8
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}


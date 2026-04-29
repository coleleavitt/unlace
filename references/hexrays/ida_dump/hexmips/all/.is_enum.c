// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C010
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C010 jmp     cs:off_4CDFF0
//
// Resolved target: is_enum
// Target address:  0x4D0A40
// GOT/IAT slot:    0x4CDFF0
// Slot symbol:     off_4CDFF0
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}


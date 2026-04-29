// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D150
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D150 jmp     cs:off_4EE090
//
// Resolved target: is_enum
// Target address:  0x4F23E0
// GOT/IAT slot:    0x4EE090
// Slot symbol:     off_4EE090
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}


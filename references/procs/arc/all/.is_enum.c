// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x88C0
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x88C0 jmp     cs:off_2A448
//
// Resolved target: is_enum
// Target address:  0x2BE70
// GOT/IAT slot:    0x2A448
// Slot symbol:     off_2A448
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115000
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115000 jmp     cs:is_enum_ptr
//
// Resolved target: is_enum
// Target address:  0x8D59D0
// GOT/IAT slot:    0x8A14A0
// Slot symbol:     is_enum_ptr
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}


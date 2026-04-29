// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F040
// Name:            .is_enum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F040 jmp     cs:off_4EA008
//
// Resolved target: is_enum
// Target address:  0x4ECA58
// GOT/IAT slot:    0x4EA008
// Slot symbol:     off_4EA008
// Target type:     <no type info>
// ============================================================

void .is_enum(/* see target signature */)
{
    // Tail-call to is_enum via GOT/IAT indirection
    return is_enum(/* forwarded args */);
}


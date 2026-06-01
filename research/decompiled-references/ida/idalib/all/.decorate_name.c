// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD2A0
// Name:            .decorate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD2A0 jmp     cs:off_2C7C138
//
// Resolved target: decorate_name
// Target address:  0x6A98D0
// GOT/IAT slot:    0x2C7C138
// Slot symbol:     off_2C7C138
// Target type:     <no type info>
// ============================================================

void .decorate_name(/* see target signature */)
{
    // Tail-call to decorate_name via GOT/IAT indirection
    return decorate_name(/* forwarded args */);
}


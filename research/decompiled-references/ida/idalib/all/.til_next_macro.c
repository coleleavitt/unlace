// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A95C0
// Name:            .til_next_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A95C0 jmp     cs:off_2C7A2C8
//
// Resolved target: til_next_macro
// Target address:  0x64E4F0
// GOT/IAT slot:    0x2C7A2C8
// Slot symbol:     off_2C7A2C8
// Target type:     <no type info>
// ============================================================

void .til_next_macro(/* see target signature */)
{
    // Tail-call to til_next_macro via GOT/IAT indirection
    return til_next_macro(/* forwarded args */);
}


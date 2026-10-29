// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB6E0
// Name:            .handle_fixups_in_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB6E0 jmp     cs:off_2C7B358
//
// Resolved target: handle_fixups_in_macro
// Target address:  0x41BAE0
// GOT/IAT slot:    0x2C7B358
// Slot symbol:     off_2C7B358
// Target type:     <no type info>
// ============================================================

void .handle_fixups_in_macro(/* see target signature */)
{
    // Tail-call to handle_fixups_in_macro via GOT/IAT indirection
    return handle_fixups_in_macro(/* forwarded args */);
}


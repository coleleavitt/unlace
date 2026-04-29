// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6660
// Name:            .handle_fixups_in_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6660 jmp     cs:off_24318
//
// Resolved target: handle_fixups_in_macro
// Target address:  0x260F8
// GOT/IAT slot:    0x24318
// Slot symbol:     off_24318
// Target type:     <no type info>
// ============================================================

void .handle_fixups_in_macro(/* see target signature */)
{
    // Tail-call to handle_fixups_in_macro via GOT/IAT indirection
    return handle_fixups_in_macro(/* forwarded args */);
}


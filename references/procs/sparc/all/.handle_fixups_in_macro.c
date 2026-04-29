// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x75D0
// Name:            .handle_fixups_in_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x75D0 jmp     cs:off_192D0
//
// Resolved target: handle_fixups_in_macro
// Target address:  0x19810
// GOT/IAT slot:    0x192D0
// Slot symbol:     off_192D0
// Target type:     <no type info>
// ============================================================

void .handle_fixups_in_macro(/* see target signature */)
{
    // Tail-call to handle_fixups_in_macro via GOT/IAT indirection
    return handle_fixups_in_macro(/* forwarded args */);
}


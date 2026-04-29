// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A70
// Name:            .handle_fixups_in_macro
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A70 jmp     cs:off_75520
//
// Resolved target: handle_fixups_in_macro
// Target address:  0x75D80
// GOT/IAT slot:    0x75520
// Slot symbol:     off_75520
// Target type:     <no type info>
// ============================================================

void .handle_fixups_in_macro(/* see target signature */)
{
    // Tail-call to handle_fixups_in_macro via GOT/IAT indirection
    return handle_fixups_in_macro(/* forwarded args */);
}


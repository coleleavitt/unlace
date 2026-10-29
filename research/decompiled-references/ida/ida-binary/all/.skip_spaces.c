// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113ED0
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113ED0 jmp     cs:skip_spaces_ptr
//
// Resolved target: skip_spaces
// Target address:  0x8D4EC0
// GOT/IAT slot:    0x8A0C08
// Slot symbol:     skip_spaces_ptr
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}


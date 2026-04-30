// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1176B0
// Name:            .copy_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1176B0 jmp     cs:copy_named_type_ptr
//
// Resolved target: copy_named_type
// Target address:  0x8D7230
// GOT/IAT slot:    0x8A27F8
// Slot symbol:     copy_named_type_ptr
// Target type:     <no type info>
// ============================================================

void .copy_named_type(/* see target signature */)
{
    // Tail-call to copy_named_type via GOT/IAT indirection
    return copy_named_type(/* forwarded args */);
}


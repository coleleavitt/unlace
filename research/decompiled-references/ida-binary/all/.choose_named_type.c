// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119E60
// Name:            .choose_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119E60 jmp     cs:choose_named_type_ptr
//
// Resolved target: choose_named_type
// Target address:  0x8D8AD8
// GOT/IAT slot:    0x8A3BD0
// Slot symbol:     choose_named_type_ptr
// Target type:     <no type info>
// ============================================================

void .choose_named_type(/* see target signature */)
{
    // Tail-call to choose_named_type via GOT/IAT indirection
    return choose_named_type(/* forwarded args */);
}


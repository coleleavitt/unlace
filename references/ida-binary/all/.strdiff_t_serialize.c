// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113E20
// Name:            .strdiff_t_serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113E20 jmp     cs:strdiff_t_serialize_ptr
//
// Resolved target: strdiff_t_serialize
// Target address:  0x8D4E50
// GOT/IAT slot:    0x8A0BB0
// Slot symbol:     strdiff_t_serialize_ptr
// Target type:     <no type info>
// ============================================================

void .strdiff_t_serialize(/* see target signature */)
{
    // Tail-call to strdiff_t_serialize via GOT/IAT indirection
    return strdiff_t_serialize(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1118C0
// Name:            .txtdiff_t_serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1118C0 jmp     cs:txtdiff_t_serialize_ptr
//
// Resolved target: txtdiff_t_serialize
// Target address:  0x8D3640
// GOT/IAT slot:    0x89F900
// Slot symbol:     txtdiff_t_serialize_ptr
// Target type:     <no type info>
// ============================================================

void .txtdiff_t_serialize(/* see target signature */)
{
    // Tail-call to txtdiff_t_serialize via GOT/IAT indirection
    return txtdiff_t_serialize(/* forwarded args */);
}


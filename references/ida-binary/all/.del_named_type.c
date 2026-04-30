// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118930
// Name:            .del_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118930 jmp     cs:del_named_type_ptr
//
// Resolved target: del_named_type
// Target address:  0x8D7DA0
// GOT/IAT slot:    0x8A3138
// Slot symbol:     del_named_type_ptr
// Target type:     <no type info>
// ============================================================

void .del_named_type(/* see target signature */)
{
    // Tail-call to del_named_type via GOT/IAT indirection
    return del_named_type(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1185D0
// Name:            .del_mapping
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1185D0 jmp     cs:del_mapping_ptr
//
// Resolved target: del_mapping
// Target address:  0x8D7BA8
// GOT/IAT slot:    0x8A2F88
// Slot symbol:     del_mapping_ptr
// Target type:     <no type info>
// ============================================================

void .del_mapping(/* see target signature */)
{
    // Tail-call to del_mapping via GOT/IAT indirection
    return del_mapping(/* forwarded args */);
}


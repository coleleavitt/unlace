// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115D10
// Name:            .add_mapping
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115D10 jmp     cs:add_mapping_ptr
//
// Resolved target: add_mapping
// Target address:  0x8D61F0
// GOT/IAT slot:    0x8A1B28
// Slot symbol:     add_mapping_ptr
// Target type:     <no type info>
// ============================================================

void .add_mapping(/* see target signature */)
{
    // Tail-call to add_mapping via GOT/IAT indirection
    return add_mapping(/* forwarded args */);
}


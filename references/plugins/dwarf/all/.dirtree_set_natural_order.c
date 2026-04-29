// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xADC0
// Name:            .dirtree_set_natural_order
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xADC0 jmp     cs:off_CA6C8
//
// Resolved target: dirtree_set_natural_order
// Target address:  0xD1030
// GOT/IAT slot:    0xCA6C8
// Slot symbol:     off_CA6C8
// Target type:     <no type info>
// ============================================================

void .dirtree_set_natural_order(/* see target signature */)
{
    // Tail-call to dirtree_set_natural_order via GOT/IAT indirection
    return dirtree_set_natural_order(/* forwarded args */);
}


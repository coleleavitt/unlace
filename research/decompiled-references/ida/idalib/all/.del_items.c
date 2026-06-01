// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB40
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB40 jmp     cs:off_2C7B588
//
// Resolved target: del_items
// Target address:  0x3D1D10
// GOT/IAT slot:    0x2C7B588
// Slot symbol:     off_2C7B588
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_A0B8
//
// Resolved target: del_items
// Target address:  0xB388
// GOT/IAT slot:    0xA0B8
// Slot symbol:     off_A0B8
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


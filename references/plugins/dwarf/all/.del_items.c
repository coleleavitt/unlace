// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA570
// Name:            .del_items
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA570 jmp     cs:off_CA2A0
//
// Resolved target: del_items
// Target address:  0xD0BD8
// GOT/IAT slot:    0xCA2A0
// Slot symbol:     off_CA2A0
// Target type:     <no type info>
// ============================================================

void .del_items(/* see target signature */)
{
    // Tail-call to del_items via GOT/IAT indirection
    return del_items(/* forwarded args */);
}


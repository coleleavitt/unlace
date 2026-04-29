// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD90
// Name:            .get_item_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD90 jmp     cs:off_4DAEB0
//
// Resolved target: get_item_refinfo
// Target address:  0x4DD8E0
// GOT/IAT slot:    0x4DAEB0
// Slot symbol:     off_4DAEB0
// Target type:     <no type info>
// ============================================================

void .get_item_refinfo(/* see target signature */)
{
    // Tail-call to get_item_refinfo via GOT/IAT indirection
    return get_item_refinfo(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CEB0
// Name:            .get_item_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CEB0 jmp     cs:off_4EDF40
//
// Resolved target: get_item_refinfo
// Target address:  0x4F2290
// GOT/IAT slot:    0x4EDF40
// Slot symbol:     off_4EDF40
// Target type:     <no type info>
// ============================================================

void .get_item_refinfo(/* see target signature */)
{
    // Tail-call to get_item_refinfo via GOT/IAT indirection
    return get_item_refinfo(/* forwarded args */);
}


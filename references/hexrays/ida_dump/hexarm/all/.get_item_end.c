// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E130
// Name:            .get_item_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E130 jmp     cs:off_4E9880
//
// Resolved target: get_item_end
// Target address:  0x4EC2A0
// GOT/IAT slot:    0x4E9880
// Slot symbol:     off_4E9880
// Target type:     <no type info>
// ============================================================

void .get_item_end(/* see target signature */)
{
    // Tail-call to get_item_end via GOT/IAT indirection
    return get_item_end(/* forwarded args */);
}


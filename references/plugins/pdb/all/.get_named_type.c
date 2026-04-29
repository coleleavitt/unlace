// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA70
// Name:            .get_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA70 jmp     cs:off_B3520
//
// Resolved target: get_named_type
// Target address:  0xB3CE8
// GOT/IAT slot:    0xB3520
// Slot symbol:     off_B3520
// Target type:     <no type info>
// ============================================================

void .get_named_type(/* see target signature */)
{
    // Tail-call to get_named_type via GOT/IAT indirection
    return get_named_type(/* forwarded args */);
}


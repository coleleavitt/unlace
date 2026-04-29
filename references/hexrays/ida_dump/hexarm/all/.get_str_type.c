// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F180
// Name:            .get_str_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F180 jmp     cs:off_4EA0A8
//
// Resolved target: get_str_type
// Target address:  0x4ECB00
// GOT/IAT slot:    0x4EA0A8
// Slot symbol:     off_4EA0A8
// Target type:     <no type info>
// ============================================================

void .get_str_type(/* see target signature */)
{
    // Tail-call to get_str_type via GOT/IAT indirection
    return get_str_type(/* forwarded args */);
}


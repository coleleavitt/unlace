// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6640
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6640 jmp     cs:off_24308
//
// Resolved target: get_switch_info
// Target address:  0x260E0
// GOT/IAT slot:    0x24308
// Slot symbol:     off_24308
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E950
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E950 jmp     cs:off_4E9C90
//
// Resolved target: get_switch_info
// Target address:  0x4EC6C8
// GOT/IAT slot:    0x4E9C90
// Slot symbol:     off_4E9C90
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}


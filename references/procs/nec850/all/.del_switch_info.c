// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A00
// Name:            .del_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A00 jmp     cs:off_2E4E8
//
// Resolved target: del_switch_info
// Target address:  0x2EB78
// GOT/IAT slot:    0x2E4E8
// Slot symbol:     off_2E4E8
// Target type:     <no type info>
// ============================================================

void .del_switch_info(/* see target signature */)
{
    // Tail-call to del_switch_info via GOT/IAT indirection
    return del_switch_info(/* forwarded args */);
}


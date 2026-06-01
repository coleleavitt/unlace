// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD8E0
// Name:            .del_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD8E0 jmp     cs:off_2C7C458
//
// Resolved target: del_switch_info
// Target address:  0x59EAE0
// GOT/IAT slot:    0x2C7C458
// Slot symbol:     off_2C7C458
// Target type:     <no type info>
// ============================================================

void .del_switch_info(/* see target signature */)
{
    // Tail-call to del_switch_info via GOT/IAT indirection
    return del_switch_info(/* forwarded args */);
}


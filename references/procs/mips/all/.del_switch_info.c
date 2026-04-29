// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D90
// Name:            .del_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D90 jmp     cs:off_756B0
//
// Resolved target: del_switch_info
// Target address:  0x75F20
// GOT/IAT slot:    0x756B0
// Slot symbol:     off_756B0
// Target type:     <no type info>
// ============================================================

void .del_switch_info(/* see target signature */)
{
    // Tail-call to del_switch_info via GOT/IAT indirection
    return del_switch_info(/* forwarded args */);
}


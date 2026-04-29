// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7E0
// Name:            .mark_switch_insns_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7E0 jmp     cs:off_353D8
//
// Resolved target: mark_switch_insns_jpt
// Target address:  0x35A38
// GOT/IAT slot:    0x353D8
// Slot symbol:     off_353D8
// Target type:     <no type info>
// ============================================================

void .mark_switch_insns_jpt(/* see target signature */)
{
    // Tail-call to mark_switch_insns_jpt via GOT/IAT indirection
    return mark_switch_insns_jpt(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6670
// Name:            .mark_switch_insns_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6670 jmp     cs:off_24320
//
// Resolved target: mark_switch_insns_jpt
// Target address:  0x26100
// GOT/IAT slot:    0x24320
// Slot symbol:     off_24320
// Target type:     <no type info>
// ============================================================

void .mark_switch_insns_jpt(/* see target signature */)
{
    // Tail-call to mark_switch_insns_jpt via GOT/IAT indirection
    return mark_switch_insns_jpt(/* forwarded args */);
}


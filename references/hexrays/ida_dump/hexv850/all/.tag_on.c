// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B040
// Name:            .tag_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B040 jmp     cs:off_4C0808
//
// Resolved target: tag_on
// Target address:  0x4C3800
// GOT/IAT slot:    0x4C0808
// Slot symbol:     off_4C0808
// Target type:     <no type info>
// ============================================================

void .tag_on(/* see target signature */)
{
    // Tail-call to tag_on via GOT/IAT indirection
    return tag_on(/* forwarded args */);
}


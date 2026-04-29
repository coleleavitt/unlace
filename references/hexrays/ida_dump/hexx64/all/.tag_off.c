// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD00
// Name:            .tag_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD00 jmp     cs:off_4ED668
//
// Resolved target: tag_off
// Target address:  0x4F1978
// GOT/IAT slot:    0x4ED668
// Slot symbol:     off_4ED668
// Target type:     <no type info>
// ============================================================

void .tag_off(/* see target signature */)
{
    // Tail-call to tag_off via GOT/IAT indirection
    return tag_off(/* forwarded args */);
}


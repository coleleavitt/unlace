// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116880
// Name:            .tag_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116880 jmp     cs:tag_off_ptr
//
// Resolved target: tag_off
// Target address:  0x8D6948
// GOT/IAT slot:    0x8A20E0
// Slot symbol:     tag_off_ptr
// Target type:     <no type info>
// ============================================================

void .tag_off(/* see target signature */)
{
    // Tail-call to tag_off via GOT/IAT indirection
    return tag_off(/* forwarded args */);
}


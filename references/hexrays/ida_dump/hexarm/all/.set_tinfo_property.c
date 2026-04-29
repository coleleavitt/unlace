// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E100
// Name:            .set_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E100 jmp     cs:off_4E9868
//
// Resolved target: set_tinfo_property
// Target address:  0x4EC288
// GOT/IAT slot:    0x4E9868
// Slot symbol:     off_4E9868
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property(/* see target signature */)
{
    // Tail-call to set_tinfo_property via GOT/IAT indirection
    return set_tinfo_property(/* forwarded args */);
}


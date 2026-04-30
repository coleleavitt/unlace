// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119680
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119680 jmp     cs:get_aflags_ptr
//
// Resolved target: get_aflags
// Target address:  0x8D8638
// GOT/IAT slot:    0x8A37E0
// Slot symbol:     get_aflags_ptr
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}


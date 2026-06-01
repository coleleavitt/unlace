// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117730
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117730 jmp     cs:create_tinfo_ptr
//
// Resolved target: create_tinfo
// Target address:  0x8D7288
// GOT/IAT slot:    0x8A2838
// Slot symbol:     create_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}


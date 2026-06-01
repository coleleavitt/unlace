// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113350
// Name:            .detach_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113350 jmp     cs:detach_tinfo_t_ptr
//
// Resolved target: detach_tinfo_t
// Target address:  0x8D4748
// GOT/IAT slot:    0x8A0648
// Slot symbol:     detach_tinfo_t_ptr
// Target type:     <no type info>
// ============================================================

void .detach_tinfo_t(/* see target signature */)
{
    // Tail-call to detach_tinfo_t via GOT/IAT indirection
    return detach_tinfo_t(/* forwarded args */);
}


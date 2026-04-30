// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111680
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111680 jmp     cs:save_tinfo_ptr
//
// Resolved target: save_tinfo
// Target address:  0x8D34B8
// GOT/IAT slot:    0x89F7E0
// Slot symbol:     save_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}


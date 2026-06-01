// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115900
// Name:            .verify_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115900 jmp     cs:verify_tinfo_ptr
//
// Resolved target: verify_tinfo
// Target address:  0x8D5F68
// GOT/IAT slot:    0x8A1920
// Slot symbol:     verify_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .verify_tinfo(/* see target signature */)
{
    // Tail-call to verify_tinfo via GOT/IAT indirection
    return verify_tinfo(/* forwarded args */);
}


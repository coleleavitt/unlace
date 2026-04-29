// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2380
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2380 jmp     cs:off_81A8
//
// Resolved target: create_tinfo
// Target address:  0x8420
// GOT/IAT slot:    0x81A8
// Slot symbol:     off_81A8
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}


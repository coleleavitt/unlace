// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B70
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B70 jmp     cs:off_4B95A0
//
// Resolved target: setinf_flag
// Target address:  0x4BBF90
// GOT/IAT slot:    0x4B95A0
// Slot symbol:     off_4B95A0
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}


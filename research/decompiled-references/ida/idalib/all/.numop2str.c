// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D70
// Name:            .numop2str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D70 jmp     cs:off_2C796A0
//
// Resolved target: numop2str
// Target address:  0x5891F0
// GOT/IAT slot:    0x2C796A0
// Slot symbol:     off_2C796A0
// Target type:     <no type info>
// ============================================================

void .numop2str(/* see target signature */)
{
    // Tail-call to numop2str via GOT/IAT indirection
    return numop2str(/* forwarded args */);
}


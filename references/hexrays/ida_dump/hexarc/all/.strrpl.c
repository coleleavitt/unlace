// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29800
// Name:            .strrpl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29800 jmp     cs:off_4B93E8
//
// Resolved target: strrpl
// Target address:  0x4BBDB8
// GOT/IAT slot:    0x4B93E8
// Slot symbol:     off_4B93E8
// Target type:     <no type info>
// ============================================================

void .strrpl(/* see target signature */)
{
    // Tail-call to strrpl via GOT/IAT indirection
    return strrpl(/* forwarded args */);
}


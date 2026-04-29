// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD70
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD70 jmp     cs:off_CA6A0
//
// Resolved target: open_linput
// Target address:  0xD1008
// GOT/IAT slot:    0xCA6A0
// Slot symbol:     off_CA6A0
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1154F0
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1154F0 jmp     cs:close_linput_ptr
//
// Resolved target: close_linput
// Target address:  0x8D5CF0
// GOT/IAT slot:    0x8A1718
// Slot symbol:     close_linput_ptr
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}


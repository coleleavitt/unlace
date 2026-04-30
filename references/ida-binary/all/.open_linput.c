// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111EC0
// Name:            .open_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111EC0 jmp     cs:open_linput_ptr
//
// Resolved target: open_linput
// Target address:  0x8D3A00
// GOT/IAT slot:    0x89FC00
// Slot symbol:     open_linput_ptr
// Target type:     <no type info>
// ============================================================

void .open_linput(/* see target signature */)
{
    // Tail-call to open_linput via GOT/IAT indirection
    return open_linput(/* forwarded args */);
}


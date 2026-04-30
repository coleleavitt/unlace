// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AF60
// Name:            .put_dword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AF60 jmp     cs:put_dword_ptr
//
// Resolved target: put_dword
// Target address:  0x8D95D8
// GOT/IAT slot:    0x8A4450
// Slot symbol:     put_dword_ptr
// Target type:     <no type info>
// ============================================================

void .put_dword(/* see target signature */)
{
    // Tail-call to put_dword via GOT/IAT indirection
    return put_dword(/* forwarded args */);
}


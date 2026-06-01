// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115ED0
// Name:            .unmake_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115ED0 jmp     cs:unmake_linput_ptr
//
// Resolved target: unmake_linput
// Target address:  0x8D62F0
// GOT/IAT slot:    0x8A1C08
// Slot symbol:     unmake_linput_ptr
// Target type:     <no type info>
// ============================================================

void .unmake_linput(/* see target signature */)
{
    // Tail-call to unmake_linput via GOT/IAT indirection
    return unmake_linput(/* forwarded args */);
}


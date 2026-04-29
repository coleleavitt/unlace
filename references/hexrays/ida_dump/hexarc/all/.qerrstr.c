// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29B50
// Name:            .qerrstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29B50 jmp     cs:off_4B9590
//
// Resolved target: qerrstr
// Target address:  0x4BBF80
// GOT/IAT slot:    0x4B9590
// Slot symbol:     off_4B9590
// Target type:     <no type info>
// ============================================================

void .qerrstr(/* see target signature */)
{
    // Tail-call to qerrstr via GOT/IAT indirection
    return qerrstr(/* forwarded args */);
}


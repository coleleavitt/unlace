// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A10
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A10 jmp     cs:off_2C79CF0
//
// Resolved target: qsnprintf
// Target address:  0x84E550
// GOT/IAT slot:    0x2C79CF0
// Slot symbol:     off_2C79CF0
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}


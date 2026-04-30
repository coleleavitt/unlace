// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111230
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111230 jmp     cs:getseg_ptr
//
// Resolved target: getseg
// Target address:  0x8D31C0
// GOT/IAT slot:    0x89F5B8
// Slot symbol:     getseg_ptr
// Target type:     <no type info>
// ============================================================

void .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}


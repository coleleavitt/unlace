// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B5D0
// Name:            .atob64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B5D0 jmp     cs:atob64_ptr
//
// Resolved target: atob64
// Target address:  0x8D99E8
// GOT/IAT slot:    0x8A4788
// Slot symbol:     atob64_ptr
// Target type:     <no type info>
// ============================================================

void .atob64(/* see target signature */)
{
    // Tail-call to atob64 via GOT/IAT indirection
    return atob64(/* forwarded args */);
}


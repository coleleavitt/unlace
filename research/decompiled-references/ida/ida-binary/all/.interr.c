// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118380
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118380 jmp     cs:interr_ptr
//
// Resolved target: interr
// Target address:  0x8D7A40
// GOT/IAT slot:    0x8A2E60
// Slot symbol:     interr_ptr
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}


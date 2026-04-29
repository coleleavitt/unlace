// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6250
// Name:            .is_invsign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6250 jmp     cs:off_1D110
//
// Resolved target: is_invsign
// Target address:  0x1D600
// GOT/IAT slot:    0x1D110
// Slot symbol:     off_1D110
// Target type:     <no type info>
// ============================================================

void .is_invsign(/* see target signature */)
{
    // Tail-call to is_invsign via GOT/IAT indirection
    return is_invsign(/* forwarded args */);
}


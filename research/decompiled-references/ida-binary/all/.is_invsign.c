// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115150
// Name:            .is_invsign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115150 jmp     cs:is_invsign_ptr
//
// Resolved target: is_invsign
// Target address:  0x8D5A90
// GOT/IAT slot:    0x8A1548
// Slot symbol:     is_invsign_ptr
// Target type:     <no type info>
// ============================================================

void .is_invsign(/* see target signature */)
{
    // Tail-call to is_invsign via GOT/IAT indirection
    return is_invsign(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1164A0
// Name:            .is_fltnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1164A0 jmp     cs:is_fltnum_ptr
//
// Resolved target: is_fltnum
// Target address:  0x8D66A8
// GOT/IAT slot:    0x8A1EF0
// Slot symbol:     is_fltnum_ptr
// Target type:     <no type info>
// ============================================================

void .is_fltnum(/* see target signature */)
{
    // Tail-call to is_fltnum via GOT/IAT indirection
    return is_fltnum(/* forwarded args */);
}


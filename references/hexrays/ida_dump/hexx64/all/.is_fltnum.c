// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C240
// Name:            .is_fltnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C240 jmp     cs:off_4ED908
//
// Resolved target: is_fltnum
// Target address:  0x4F1C28
// GOT/IAT slot:    0x4ED908
// Slot symbol:     off_4ED908
// Target type:     <no type info>
// ============================================================

void .is_fltnum(/* see target signature */)
{
    // Tail-call to is_fltnum via GOT/IAT indirection
    return is_fltnum(/* forwarded args */);
}


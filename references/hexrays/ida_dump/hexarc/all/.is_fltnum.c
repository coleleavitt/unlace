// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A180
// Name:            .is_fltnum
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A180 jmp     cs:off_4B98A8
//
// Resolved target: is_fltnum
// Target address:  0x4BC2A8
// GOT/IAT slot:    0x4B98A8
// Slot symbol:     off_4B98A8
// Target type:     <no type info>
// ============================================================

void .is_fltnum(/* see target signature */)
{
    // Tail-call to is_fltnum via GOT/IAT indirection
    return is_fltnum(/* forwarded args */);
}


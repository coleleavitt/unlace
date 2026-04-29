// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B600
// Name:            .del_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B600 jmp     cs:off_4C0AE8
//
// Resolved target: del_frame
// Target address:  0x4C3AE8
// GOT/IAT slot:    0x4C0AE8
// Slot symbol:     off_4C0AE8
// Target type:     <no type info>
// ============================================================

void .del_frame(/* see target signature */)
{
    // Tail-call to del_frame via GOT/IAT indirection
    return del_frame(/* forwarded args */);
}


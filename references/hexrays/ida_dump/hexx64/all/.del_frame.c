// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C6C0
// Name:            .del_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C6C0 jmp     cs:off_4EDB48
//
// Resolved target: del_frame
// Target address:  0x4F1E78
// GOT/IAT slot:    0x4EDB48
// Slot symbol:     off_4EDB48
// Target type:     <no type info>
// ============================================================

void .del_frame(/* see target signature */)
{
    // Tail-call to del_frame via GOT/IAT indirection
    return del_frame(/* forwarded args */);
}


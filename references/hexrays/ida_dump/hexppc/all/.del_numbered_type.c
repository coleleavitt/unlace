// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A320
// Name:            .del_numbered_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A320 jmp     cs:off_4DA178
//
// Resolved target: del_numbered_type
// Target address:  0x4DCB48
// GOT/IAT slot:    0x4DA178
// Slot symbol:     off_4DA178
// Target type:     <no type info>
// ============================================================

void .del_numbered_type(/* see target signature */)
{
    // Tail-call to del_numbered_type via GOT/IAT indirection
    return del_numbered_type(/* forwarded args */);
}


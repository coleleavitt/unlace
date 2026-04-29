// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D140
// Name:            .del_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D140 jmp     cs:off_4EE088
//
// Resolved target: del_named_type
// Target address:  0x4F23D8
// GOT/IAT slot:    0x4EE088
// Slot symbol:     off_4EE088
// Target type:     <no type info>
// ============================================================

void .del_named_type(/* see target signature */)
{
    // Tail-call to del_named_type via GOT/IAT indirection
    return del_named_type(/* forwarded args */);
}


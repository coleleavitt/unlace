// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABB80
// Name:            .del_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABB80 jmp     cs:off_2C7B5A8
//
// Resolved target: del_named_type
// Target address:  0x6597D0
// GOT/IAT slot:    0x2C7B5A8
// Slot symbol:     off_2C7B5A8
// Target type:     <no type info>
// ============================================================

void .del_named_type(/* see target signature */)
{
    // Tail-call to del_named_type via GOT/IAT indirection
    return del_named_type(/* forwarded args */);
}


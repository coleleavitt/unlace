// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC400
// Name:            .del_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC400 jmp     cs:off_2C7B9E8
//
// Resolved target: del_til
// Target address:  0x609110
// GOT/IAT slot:    0x2C7B9E8
// Slot symbol:     off_2C7B9E8
// Target type:     <no type info>
// ============================================================

void .del_til(/* see target signature */)
{
    // Tail-call to del_til via GOT/IAT indirection
    return del_til(/* forwarded args */);
}


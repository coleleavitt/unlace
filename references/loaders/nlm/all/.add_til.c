// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2380
// Name:            .add_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2380 jmp     cs:off_81A8
//
// Resolved target: add_til
// Target address:  0x8898
// GOT/IAT slot:    0x81A8
// Slot symbol:     off_81A8
// Target type:     <no type info>
// ============================================================

void .add_til(/* see target signature */)
{
    // Tail-call to add_til via GOT/IAT indirection
    return add_til(/* forwarded args */);
}


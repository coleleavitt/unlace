// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB920
// Name:            .add_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB920 jmp     cs:off_2C7B478
//
// Resolved target: add_til
// Target address:  0x61A090
// GOT/IAT slot:    0x2C7B478
// Slot symbol:     off_2C7B478
// Target type:     <no type info>
// ============================================================

void .add_til(/* see target signature */)
{
    // Tail-call to add_til via GOT/IAT indirection
    return add_til(/* forwarded args */);
}


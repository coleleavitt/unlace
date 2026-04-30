// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1184F0
// Name:            .add_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1184F0 jmp     cs:add_til_ptr
//
// Resolved target: add_til
// Target address:  0x8D7B20
// GOT/IAT slot:    0x8A2F18
// Slot symbol:     add_til_ptr
// Target type:     <no type info>
// ============================================================

void .add_til(/* see target signature */)
{
    // Tail-call to add_til via GOT/IAT indirection
    return add_til(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x74D0
// Name:            .add_regarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x74D0 jmp     cs:off_19250
//
// Resolved target: add_regarg
// Target address:  0x19780
// GOT/IAT slot:    0x19250
// Slot symbol:     off_19250
// Target type:     <no type info>
// ============================================================

void .add_regarg(/* see target signature */)
{
    // Tail-call to add_regarg via GOT/IAT indirection
    return add_regarg(/* forwarded args */);
}


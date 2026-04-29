// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA680
// Name:            .add_regarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA680 jmp     cs:off_35328
//
// Resolved target: add_regarg
// Target address:  0x35978
// GOT/IAT slot:    0x35328
// Slot symbol:     off_35328
// Target type:     <no type info>
// ============================================================

void .add_regarg(/* see target signature */)
{
    // Tail-call to add_regarg via GOT/IAT indirection
    return add_regarg(/* forwarded args */);
}


// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC160
// Name:            .sel2para
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC160 jmp     cs:off_2C7B898
//
// Resolved target: sel2para
// Target address:  0x510090
// GOT/IAT slot:    0x2C7B898
// Slot symbol:     off_2C7B898
// Target type:     <no type info>
// ============================================================

void .sel2para(/* see target signature */)
{
    // Tail-call to sel2para via GOT/IAT indirection
    return sel2para(/* forwarded args */);
}


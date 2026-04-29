// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD30
// Name:            .gen_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD30 jmp     cs:off_4DAE80
//
// Resolved target: gen_gdl
// Target address:  0x4DD8B0
// GOT/IAT slot:    0x4DAE80
// Slot symbol:     off_4DAE80
// Target type:     <no type info>
// ============================================================

void .gen_gdl(/* see target signature */)
{
    // Tail-call to gen_gdl via GOT/IAT indirection
    return gen_gdl(/* forwarded args */);
}


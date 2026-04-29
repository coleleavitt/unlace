// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0A0
// Name:            .Clp_registerCallBack2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0A0 jmp     cs:off_4ED838
//
// Resolved target: Clp_registerCallBack2
// Target address:  0x4F1B48
// GOT/IAT slot:    0x4ED838
// Slot symbol:     off_4ED838
// Target type:     <no type info>
// ============================================================

void .Clp_registerCallBack2(/* see target signature */)
{
    // Tail-call to Clp_registerCallBack2 via GOT/IAT indirection
    return Clp_registerCallBack2(/* forwarded args */);
}


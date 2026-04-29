// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDF0
// Name:            .Clp_registerCallBack
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDF0 jmp     cs:off_4ED6E0
//
// Resolved target: Clp_registerCallBack
// Target address:  0x4F19F0
// GOT/IAT slot:    0x4ED6E0
// Slot symbol:     off_4ED6E0
// Target type:     <no type info>
// ============================================================

void .Clp_registerCallBack(/* see target signature */)
{
    // Tail-call to Clp_registerCallBack via GOT/IAT indirection
    return Clp_registerCallBack(/* forwarded args */);
}


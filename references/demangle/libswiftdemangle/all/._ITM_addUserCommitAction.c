// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA030
// Name:            ._ITM_addUserCommitAction
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA030 jmp     cs:off_48018
//
// Resolved target: _ITM_addUserCommitAction
// Target address:  0x48628
// GOT/IAT slot:    0x48018
// Slot symbol:     off_48018
// Target type:     <no type info>
// ============================================================

void ._ITM_addUserCommitAction(/* see target signature */)
{
    // Tail-call to _ITM_addUserCommitAction via GOT/IAT indirection
    return _ITM_addUserCommitAction(/* forwarded args */);
}


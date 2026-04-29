// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x2FAB8
// Name:     auto_apply_tail
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to auto_apply_tail are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void auto_apply_tail(/* see import library declaration */);


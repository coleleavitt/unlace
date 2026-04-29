// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x50320
// Name:     log
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to log are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void log(/* see import library declaration */);


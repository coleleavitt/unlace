// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x2D11900
// Name:     putenv
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to putenv are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void putenv(/* see import library declaration */);


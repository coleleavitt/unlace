__int64 sub_E1D10()
{
  unsigned int v0; // eax
  _BOOL8 v2; // rsi
  char *v3; // rdi

  v0 = dword_251538;
  if ( (dword_251538 & 1) != 0 )
  {
    sub_C0300();
    v3 = "Running";
    if ( dword_2515A4 <= 0 )
      v3 = nullptr;
    sub_CB4C0(v3);
    v0 = dword_251538 & 0xFFFFFFFE;
    dword_251538 &= ~1u;
  }
  if ( (v0 & 4) != 0 )
  {
    v2 = dbg != 0;
    sub_10AC80(1, v2);
    TView::disableCommand((TView *)unk_24DF86, v2);
    v0 = dword_251538 & 0xFFFFFFFB;
    dword_251538 &= ~4u;
  }
  if ( (v0 & 2) != 0 )
    dword_251538 = v0 & 0xFFFFFFFD;
  if ( dbg && (*(_BYTE *)(dbg + 34LL) & 8) != 0 )
    return 0;
  if ( TheTopView && (*(_BYTE *)(TheTopView + 29LL) & 2) != 0 )
    return (unsigned int)-(dword_2515A4 == 0);
  return sub_E14A0(0);
}


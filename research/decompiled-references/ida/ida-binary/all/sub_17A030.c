__int64 __fastcall sub_17A030(__int64 a1)
{
  bool v1; // r12
  char merge_state; // al
  QT::QAction *v3; // rdi

  if ( dword_8CC5E8 )
  {
    v1 = 0;
    if ( byte_8CC5EC )
      goto LABEL_3;
  }
  else
  {
    v1 = 0;
    if ( dword_8CC5F0 >= 0 )
      goto LABEL_3;
  }
  v1 = 0;
  if ( (~WORD4(xmmword_8CC820) & 0x600) == 0 )
  {
    v1 = sub_384360() == 0;
    if ( dbg )
      goto LABEL_4;
LABEL_10:
    QT::QAction::setVisible(*(QT::QAction **)(a1 + 192), 0);
    return 7;
  }
LABEL_3:
  if ( !dbg )
    goto LABEL_10;
LABEL_4:
  merge_state = get_merge_state();
  v3 = *(QT::QAction **)(a1 + 192);
  if ( (merge_state & 3) != 0 || (*(_BYTE *)(dbg + 35LL) & 0x40) == 0 )
  {
    QT::QAction::setVisible(v3, 0);
    return 7;
  }
  QT::QAction::setVisible(v3, 1);
  if ( !v1 )
    return 7;
  return 3;
}

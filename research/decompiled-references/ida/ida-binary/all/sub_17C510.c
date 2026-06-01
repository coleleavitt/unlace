__int64 __fastcall sub_17C510(__int64 a1)
{
  unsigned int v1; // ebp
  char merge_state; // al
  QT::QAction *v3; // rdi

  if ( dword_8CC5E8 )
  {
    LOBYTE(v1) = byte_8CC5EC ^ 1;
    if ( dbg )
      goto LABEL_3;
LABEL_7:
    QT::QAction::setVisible(*(QT::QAction **)(a1 + 192), 0);
    return 7;
  }
  v1 = (unsigned int)dword_8CC5F0 >> 31;
  if ( !dbg )
    goto LABEL_7;
LABEL_3:
  merge_state = get_merge_state();
  v3 = *(QT::QAction **)(a1 + 192);
  if ( (merge_state & 3) != 0 || (*(_BYTE *)(dbg + 35LL) & 0x40) == 0 )
  {
    QT::QAction::setVisible(v3, 0);
    return 7;
  }
  QT::QAction::setVisible(v3, 1);
  if ( !(_BYTE)v1 )
    return 7;
  return 3;
}

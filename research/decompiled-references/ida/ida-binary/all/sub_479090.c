__int64 __fastcall sub_479090(__int64 a1, QT::QObject *a2)
{
  __int64 v2; // rax
  QT::QWidget *v4; // rbp

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 520) )
    return 0;
  v4 = *(QT::QWidget **)(v2 + 512);
  if ( !v4 || !sub_4CF3F0(a2) )
    return 0;
  sub_4CB2D0(v4);
  return 1;
}

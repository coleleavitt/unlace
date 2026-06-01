__int64 __fastcall sub_4971D0(QT::QAbstractItemView *this, __int64 a2, double a3, double a4, __m128 a5)
{
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v5 = *(_DWORD *)(a2 + 112);
  if ( (v5 & 0x10) == 0 )
  {
    if ( (v5 & 0x80u) == 0 )
      goto LABEL_3;
LABEL_6:
    v7 = QT::QAbstractItemView::model(this);
    sub_496CC0(v7, (__int64 *)(a2 + 88), (__int64)this, v8, v9, v10);
    if ( (*(_DWORD *)(a2 + 112) & 0x40) == 0 )
      return 1;
    goto LABEL_7;
  }
  sub_48F1D0(this, a2);
  v5 = *(_DWORD *)(a2 + 112);
  if ( (v5 & 0x80u) != 0 )
    goto LABEL_6;
LABEL_3:
  if ( (v5 & 0x40) == 0 )
    return 1;
LABEL_7:
  sub_493E20((_QWORD *)(a2 + 24), this, a3, a4, a5);
  return 1;
}

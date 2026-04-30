__int64 __fastcall edit_watch_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rdx
  QT::QAbstractItemView *v5; // rbp
  __int64 v6; // rax
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v7[3] = __readfsqword(0x28u);
  if ( v2 == 33 )
  {
    result = 6;
    if ( !*(_BYTE *)(a1 + 12) )
      return result;
  }
  else
  {
    result = 6;
    if ( v2 != 32 )
      return result;
  }
  v4 = sub_3E0310(*(QT::QAbstractItemView **)a2);
  result = 7;
  if ( v4 )
  {
    v5 = *(QT::QAbstractItemView **)a2;
    QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v7);
    v6 = QT::QAbstractItemView::model(v5);
    return ((*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 312LL))(v6, v7) & 2) == 0 ? 7 : 3;
  }
  return result;
}

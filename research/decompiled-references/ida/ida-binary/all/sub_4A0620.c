__int64 __fastcall sub_4A0620(__int64 a1, int a2)
{
  QT::QAbstractItemView *v2; // rax
  QT::QAbstractItemView *v3; // rdi

  v2 = *(QT::QAbstractItemView **)(a1 + 2384);
  if ( *(_DWORD *)(a1 + 2376) == 2 )
    return sub_48F100(v2, a2);
  v3 = *(QT::QAbstractItemView **)(a1 + 2472);
  if ( v2 == v3 )
    return sub_48F100(v2, a2);
  else
    return sub_499A40(v3, a2);
}

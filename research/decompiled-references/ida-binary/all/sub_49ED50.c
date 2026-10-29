__int64 __fastcall TChooser__::vfunc_6(__int64 a1, int a2)
{
  QT::QAbstractItemView *v2; // rax
  QT::QAbstractItemView *v3; // rdi

  v2 = *(QT::QAbstractItemView **)(a1 + 2280);
  if ( *(_DWORD *)(a1 + 2272) == 2 )
    return sub_48F100(v2, a2);
  v3 = *(QT::QAbstractItemView **)(a1 + 2368);
  if ( v2 == v3 )
    return sub_48F100(v2, a2);
  else
    return sub_499A40(v3, a2);
}

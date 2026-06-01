__int64 __fastcall tchooser_dirtree_widget_t__::vfunc_5(QT::QAbstractItemView *a1, QT::QEvent *a2)
{
  __int64 result; // rax

  if ( *((_WORD *)a2 + 4) == 100 )
    *(_DWORD *)(*((_QWORD *)a1 + 30) + 2012LL) |= 4u;
  result = sub_497F60(a1, a2);
  if ( *((_WORD *)a2 + 4) == 100 )
    *(_DWORD *)(*((_QWORD *)a1 + 30) + 2012LL) &= ~4u;
  return result;
}

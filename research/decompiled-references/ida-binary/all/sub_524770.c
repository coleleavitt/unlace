__int64 __fastcall standalone_dirtree_widget_t__::vfunc_5(QT::QTreeView *this, QT::QEvent *a2)
{
  __int64 result; // rax

  result = sub_4E1470((_DWORD *)this + 76, this, (__int64)a2);
  if ( !(_BYTE)result )
  {
    if ( *((_WORD *)a2 + 4) == 2006 )
      sub_5219B0(this);
    return sub_497F60(this, a2);
  }
  return result;
}

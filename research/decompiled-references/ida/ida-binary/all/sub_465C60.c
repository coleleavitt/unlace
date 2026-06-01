unsigned __int64 __fastcall sub_465C60(QT::QAbstractItemView *a1, int a2, int a3, __int64 a4, double a5)
{
  unsigned __int64 result; // rax

  if ( !a2 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        return sub_28D9A0(a1, **(_QWORD **)(a4 + 8), a5);
    }
    else
    {
      return sub_28D2D0(a1, **(_QWORD **)(a4 + 8), **(_QWORD **)(a4 + 16));
    }
  }
  return result;
}

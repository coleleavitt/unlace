__int64 __fastcall chooser_dirtree_widget_t__::vfunc_2(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = base_dirtree_widget_t__::vfunc_2(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_498C70(a1, *(_QWORD *)(a4 + 8));
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}

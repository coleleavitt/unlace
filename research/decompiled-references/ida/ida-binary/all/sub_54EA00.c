__int64 __fastcall standalone_dirtree_widget_t__::vfunc_2(
        QT::QMetaObject *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+Ch] [rbp-1Ch]

  result = base_dirtree_widget_t__::vfunc_2(a1, a2, a3, (__int64)a4);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( a2 == 7 )
      {
        if ( (int)result <= 9 )
          **a4 = 0;
        return (unsigned int)(result - 10);
      }
      else if ( a2 <= 8 )
      {
        v8 = 334;
        if ( _bittest64(&v8, a2) )
        {
          v9 = result;
          sub_54E4F0(a1, a2, (unsigned int)result, (__int64)a4, v6);
          return (unsigned int)(v9 - 4);
        }
      }
    }
    else
    {
      v7 = result - 10;
      if ( (int)result <= 9 )
        sub_54E4F0(a1, 0, (unsigned int)result, (__int64)a4, v6);
      return v7;
    }
  }
  return result;
}

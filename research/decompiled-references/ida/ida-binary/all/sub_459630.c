__int64 __fastcall watchview_t__::vfunc_2(QT::QObject *a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // [rsp+Ch] [rbp-1Ch]

  result = CustomIDAMemo__::vfunc_2(a1);
  if ( (int)result >= 0 )
  {
    if ( !(_DWORD)a2 )
    {
      if ( (int)result <= 1 )
      {
        v9 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_3DA680((__int64)a1, **(QT::QWidget ****)(a5 + 8), a3);
          LODWORD(result) = 1;
        }
        else
        {
          sub_3D9EF0((__int64)a1, a3, a2, v7, v8);
          LODWORD(result) = v9;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( (_DWORD)a2 == 7 )
    {
      if ( (int)result <= 1 )
        **(_QWORD **)a5 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}

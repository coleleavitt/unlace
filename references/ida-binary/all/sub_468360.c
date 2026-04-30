__int64 __fastcall IDAViewHost__::vfunc_2(QT::QSplitter *a1, int a2, __int64 a3, _QWORD **a4, double a5)
{
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = listing_host_t__::vfunc_2(a1, a2, a5, a3, (__int64)a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v7 = result;
        sub_468310((__int64)a1, 0, (unsigned int)result, (__int64)a4, a5);
        LODWORD(result) = v7;
      }
      return (unsigned int)(result - 3);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 2 )
        **a4 = 0;
      return (unsigned int)(result - 3);
    }
  }
  return result;
}

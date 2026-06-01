__int64 __fastcall listing_host_t__::vfunc_2(QT::QSplitter *this, int a2, double a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QSplitter::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v7 = result;
        if ( (_DWORD)result == 1 )
        {
          sub_2EE180(this);
          LODWORD(result) = 1;
        }
        else
        {
          sub_2EDA70((__int64)this, **(unsigned int **)(a5 + 8), **(unsigned int **)(a5 + 16), *(_QWORD *)(a5 + 8), a3);
          LODWORD(result) = v7;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **(_QWORD **)a5 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}

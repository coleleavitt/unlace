__int64 __fastcall til_view_t__::vfunc_2(
        __int64 a1,
        int a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // [rsp+Ch] [rbp-1Ch]

  result = QT::QSplitter::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 3 )
      {
        v16 = result;
        if ( (_DWORD)result == 2 )
        {
          sub_3C6E70(a1, **(_QWORD **)(a12 + 8), a3, a4, a5, a6, v14, v15, a9, a10);
          LODWORD(result) = 2;
        }
        else if ( (_DWORD)result == 3 )
        {
          sub_3C6AF0(
            a1,
            a3,
            a4,
            *(double *)a5.m128_u64,
            *(double *)a6.m128_u64,
            v14,
            v15,
            *(double *)a9.m128_u64,
            a10,
            *(_QWORD *)(a12 + 8),
            *(_QWORD *)(a12 + 16));
          LODWORD(result) = v16;
        }
        else
        {
          if ( (_DWORD)result == 1 )
            sub_3C6E50(a1);
          else
            sub_3C7010(a1);
          LODWORD(result) = v16;
        }
      }
      return (unsigned int)(result - 4);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 3 )
        **(_QWORD **)a12 = 0;
      return (unsigned int)(result - 4);
    }
  }
  return result;
}

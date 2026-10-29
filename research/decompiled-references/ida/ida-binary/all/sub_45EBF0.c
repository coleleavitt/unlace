__int64 __fastcall IDAView__::vfunc_2(
        QT::QObject *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  __int64 v14; // rcx
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // [rsp+Ch] [rbp-1Ch]

  result = EAView__::vfunc_2(a1, a2, a3, (_QWORD *)a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v17 = result;
        if ( (_DWORD)result == 1 )
        {
          (*(void (__fastcall **)(QT::QObject *))(*(_QWORD *)a1 + 1072LL))(a1);
          LODWORD(result) = 1;
        }
        else
        {
          if ( (_DWORD)result == 2 )
            sub_33A6C0(
              a1,
              **(_QWORD **)(a4 + 8),
              *(_QWORD *)(a4 + 8),
              v14,
              *(double *)a5.m128_u64,
              a6,
              a7,
              a8,
              v15,
              v16,
              a11,
              a12);
          else
            (*(void (__fastcall **)(QT::QObject *, _QWORD))(*(_QWORD *)a1 + 1128LL))(a1, *(_QWORD *)(a4 + 8));
          LODWORD(result) = v17;
        }
      }
      return (unsigned int)(result - 3);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 2 )
        **(_QWORD **)a4 = 0;
      return (unsigned int)(result - 3);
    }
  }
  return result;
}

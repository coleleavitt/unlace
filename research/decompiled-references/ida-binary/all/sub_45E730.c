__int64 __fastcall EAView__::vfunc_2(
        QT::QObject *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
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
  void (*v14)(); // rdx

  result = CustomIDAMemo__::vfunc_2(a1, a2, a5, a6, a7, a8, a9, a10, a11, a12, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        v14 = *(void (**)())(*(_QWORD *)a1 + 1128LL);
        if ( v14 != nullsub_189 )
        {
          ((void (__fastcall *)(QT::QObject *, _QWORD))v14)(a1, a4[1]);
          LODWORD(result) = 0;
        }
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        *(_QWORD *)*a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}

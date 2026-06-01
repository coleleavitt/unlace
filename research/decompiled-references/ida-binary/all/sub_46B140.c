__int64 __fastcall IDAApplication__::vfunc_2(
        QT::QMetaObject *a1,
        int a2,
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
  double v14; // xmm4_8
  double v15; // xmm5_8
  _QWORD *v16; // rdx
  int v17; // [rsp+Ch] [rbp-1Ch]

  result = ida_app_t__::vfunc_2(a1, a2, a3, (_QWORD **)a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v17 = result;
        sub_46AE30(a1, 0, result, a4, a5, a6, a7, a8, v14, v15, a11, a12);
        LODWORD(result) = v17;
      }
      return (unsigned int)(result - 3);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 2 )
      {
        v16 = *(_QWORD **)a4;
        if ( (_DWORD)result == 2 && **(_DWORD **)(a4 + 8) <= 1u )
          *v16 = &unk_8C1460;
        else
          *v16 = 0;
      }
      return (unsigned int)(result - 3);
    }
  }
  return result;
}

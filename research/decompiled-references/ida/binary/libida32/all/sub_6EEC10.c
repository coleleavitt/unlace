__int64 __fastcall sub_6EEC10(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned __int64 v18; // rsi

  if ( !a2 )
    return 1;
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 <= 7 || (result = sub_6EEC10(a1, v11 & 0xFFFFFFFFFFFFFFF8LL), (_BYTE)result) )
  {
    if ( (unsigned int)sub_E6C2C0(a2) == 3 )
    {
      v18 = 0;
      if ( (*(_QWORD *)(a2 + 8) & 6LL) == 4 )
        v18 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      return sub_6EE600(a1, v18, v13, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10);
    }
    else
    {
      return 1;
    }
  }
  return result;
}


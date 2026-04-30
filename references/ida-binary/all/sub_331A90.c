__int64 __fastcall custom_data_format_ah_t__::vfunc_0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // edx
  __int64 v13; // rsi

  v10 = *(_DWORD *)(a2 + 8);
  v13 = *(unsigned int *)(a1 + 12);
  if ( v10 == 25 || v10 == 58 )
    return (unsigned __int8)sub_3BCC70(a2, v13);
  else
    return (unsigned __int8)sub_331A20(a2, v13, a3, a4, a5, a6, a7, a8, a9, a10);
}

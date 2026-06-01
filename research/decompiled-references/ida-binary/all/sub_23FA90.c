__int64 __fastcall sub_23FA90(
        const char *a1,
        unsigned int *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  unsigned int v11; // eax
  double v12; // xmm4_8
  double v13; // xmm5_8
  int v14; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  result = 0;
  if ( dword_8CC5F0 )
  {
    if ( a1 && a2 )
    {
      v14 = 0;
      v11 = sub_2383E0(a1, (__int64)&v14, (unsigned int)dword_8CC5F0);
      return sub_23F7A0(v11, (unsigned __int16 *)&v14, a2, a3, a4, a5, a6, v12, v13, a9, a10);
    }
    else
    {
      return 0;
    }
  }
  return result;
}

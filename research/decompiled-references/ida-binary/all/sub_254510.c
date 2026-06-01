__int64 __fastcall sub_254510(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11)
{
  int *v11; // rbx
  const char *v12; // rdi
  unsigned int v13; // eax
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v17; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( dword_8CC5F0
    && (v11 = *(int **)(a1 + 32), (v12 = *(const char **)(a1 + 24)) != nullptr)
    && v11
    && (v17 = 0, v13 = sub_2383E0(v12, (__int64)&v17, a11), v13 != -1) )
  {
    return (unsigned __int8)sub_254260(v13, (unsigned __int16 *)&v17, v11, a2, a3, a4, a5, v14, v15, a8, a9);
  }
  else
  {
    return 0;
  }
}

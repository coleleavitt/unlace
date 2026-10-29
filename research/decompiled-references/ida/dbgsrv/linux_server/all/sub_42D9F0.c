/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D9F0
// Address: 0x000000000042D9F0

//----- (000000000042D9F0) ----------------------------------------------------
__int64 __fastcall sub_42D9F0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  bool v10; // zf
  const char *v12; // rsi
  double v13; // xmm4_8
  double v14; // xmm5_8
  const char *v15; // rsi
  unsigned int v16; // ebx
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v19; // [rsp+8h] [rbp-20h]
  unsigned __int64 v20; // [rsp+18h] [rbp-10h]

  v10 = *(_QWORD *)(a1 + 16) == 0;
  v20 = __readfsqword(0x28u);
  v19 = 0;
  v12 = s1;
  ptr = nullptr;
  if ( !v10 )
    v12 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)sub_43A9B0(nullptr, v12, (__int64)&ptr, 0, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10) )
  {
    *(_QWORD *)(a2 + 8) = 1;
    v16 = 0;
  }
  else
  {
    v15 = s1;
    if ( (_QWORD)v19 )
      v15 = (const char *)ptr;
    v16 = sub_42D8B0(a2, v15, 0.0, a4, a5, a6, v13, v14, a9, a10);
  }
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    j__free(ptr);
  }
  return v16;
}
// 42DA4B: variable 'v13' is possibly undefined
// 42DA4B: variable 'v14' is possibly undefined

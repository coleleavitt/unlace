/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D8B0
// Address: 0x000000000042D8B0

//----- (000000000042D8B0) ----------------------------------------------------
__int64 __fastcall sub_42D8B0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm4_8
  double v14; // xmm5_8
  double v15; // xmm4_8
  double v16; // xmm5_8
  size_t v17; // rax
  size_t v18; // r13
  unsigned int v19; // ebx
  double v20; // xmm4_8
  double v21; // xmm5_8
  void *v23; // r14
  char v24; // [rsp+0h] [rbp-58h] BYREF
  void *ptr[10]; // [rsp+8h] [rbp-50h] BYREF

  ptr[4] = (void *)__readfsqword(0x28u);
  v10 = sub_439DA0("exception");
  sub_442A20(a1, v10, a3, a4, a5, a6, v11, v12, a9, a10);
  v24 = 2;
  memset(ptr, 0, 24);
  sub_441540((__int64)&v24, 0.0, a4, a5, a6, v13, v14, a9, a10);
  if ( a2 )
  {
    v17 = strlen(a2);
    v24 = 7;
    memset(ptr, 0, 24);
    v18 = v17;
    if ( v17 )
    {
      v23 = (void *)(v17 + 1);
      ptr[0] = sub_481540((__int64)ptr, nullptr, v17 + 1, 1u);
      ptr[1] = v23;
      memmove(ptr[0], a2, v18);
      *((_BYTE *)ptr[0] + v18) = 0;
    }
  }
  else
  {
    v24 = 7;
    memset(ptr, 0, 24);
  }
  sub_443F90(a1, "description", (__m128i *)&v24, 0, 0.0, a4, a5, a6, v15, v16, a9, a10);
  v19 = sub_479EB0(0x5Au);
  sub_441540((__int64)&v24, 0.0, a4, a5, a6, v20, v21, a9, a10);
  return v19;
}
// 42D8E5: variable 'v11' is possibly undefined
// 42D8E5: variable 'v12' is possibly undefined
// 42D903: variable 'v13' is possibly undefined
// 42D903: variable 'v14' is possibly undefined
// 42D946: variable 'v15' is possibly undefined
// 42D946: variable 'v16' is possibly undefined
// 42D95A: variable 'v20' is possibly undefined
// 42D95A: variable 'v21' is possibly undefined

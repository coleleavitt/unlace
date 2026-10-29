/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442F80
// Address: 0x0000000000442F80

//----- (0000000000442F80) ----------------------------------------------------
void __fastcall __noreturn sub_442F80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned __int64 v12; // rbp
  char *v15; // rdi
  __int64 i; // rcx
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // rbp
  __int64 v20; // r15
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // r12
  __int64 j; // rbp
  __int64 v25; // rdi
  void *v26; // rdi
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+18h] [rbp-A0h]
  char v31[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v32; // [rsp+38h] [rbp-80h]
  __int128 v33; // [rsp+40h] [rbp-78h]
  unsigned __int8 v34[8]; // [rsp+50h] [rbp-68h] BYREF
  char v35; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-40h]

  v12 = a4;
  v36 = __readfsqword(0x28u);
  v33 = 0;
  v31[0] = 2;
  v32 = a4;
  v29 = 0;
  v30 = 0;
  if ( a4 )
  {
    v15 = &v35;
    for ( i = 6; i; --i )
    {
      *(_DWORD *)v15 = 0;
      v15 += 4;
    }
    v34[0] = 2;
    sub_442DA0((__int64)&v29, v12, v34, 0.0, a6, a7, a8, a9, a10, a11, a12);
    sub_441540((__int64)v34, 0.0, a6, a7, a8, v17, v18, a11, a12);
    if ( (int)v12 > 0 )
    {
      v19 = 32 * v12;
      v20 = 0;
      do
      {
        sub_43CF00((__m128i *)(v20 + v29), (__m128i *)(a3 + v20));
        v20 += 32;
      }
      while ( v19 != v20 );
    }
  }
  v21 = *(void **)(a1 + 48);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    j__free(v21);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v22 = *(void **)(a1 + 72);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j__free(v22);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v23 = *(_QWORD *)(a1 + 32);
    if ( v23 )
    {
      for ( j = 0; j != v23; ++j )
      {
        v25 = j;
        sub_441540(*(_QWORD *)(a1 + 24) + 32 * v25, 0.0, a6, a7, a8, a9, a10, a11, a12);
      }
    }
    v26 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v26);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v27 = *(_QWORD *)(a1 + 8);
  v28 = (*(_DWORD *)(v27 + 120))-- == 1;
  if ( v28 && off_4C56F8 )
    off_4C56F8();
  *(_DWORD *)a1 = 0;
  (*(void (__fastcall **)(__int64, char *, double, double, double, double, double, double, double, double, double))(a2 + 8))(
    v29,
    v31,
    0.0,
    *(double *)a6.m128_u64,
    *(double *)a7.m128_u64,
    *(double *)a8.m128_u64,
    a9,
    a10,
    *(double *)a11.m128_u64,
    *(double *)a12.m128_u64,
    COERCE_DOUBLE(&v29));
  if ( !byte_4C94E1 )
    sub_481AC0(291);
  BUG();
}
// 44300B: variable 'v17' is possibly undefined
// 44300B: variable 'v18' is possibly undefined
// 4430BF: variable 'a9' is possibly undefined
// 4430BF: variable 'a10' is possibly undefined
// 42BEE0: using guessed type __int64 __fastcall sub_42BEE0();
// 4C56F8: using guessed type __int64 (__fastcall *off_4C56F8)();
// 4C94E1: using guessed type char byte_4C94E1;

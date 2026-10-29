/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436A40
// Address: 0x0000000000436A40

//----- (0000000000436A40) ----------------------------------------------------
__int64 __fastcall sub_436A40(
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int128 v18; // [rsp+8h] [rbp-20h]
  unsigned __int64 v19; // [rsp+18h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  ptr = nullptr;
  v18 = 0;
  sub_435B00(
    (__int64 (__fastcall *)(__int64, __int64))sub_4359E0,
    (__int64)&ptr,
    a1,
    a2,
    0.0,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  if ( (unsigned __int64)v18 > 1 )
    sub_410EA0((int)"%s", (__int64)ptr, v10, v11, v12, v13, (__m128)0LL, a4, a5, a6, v14, v15, a9, a10, (char)ptr);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    j__free(ptr);
  }
  return 0;
}
// 436ABD: variable 'v10' is possibly undefined
// 436ABD: variable 'v11' is possibly undefined
// 436ABD: variable 'v12' is possibly undefined
// 436ABD: variable 'v13' is possibly undefined
// 436ABD: variable 'v14' is possibly undefined
// 436ABD: variable 'v15' is possibly undefined

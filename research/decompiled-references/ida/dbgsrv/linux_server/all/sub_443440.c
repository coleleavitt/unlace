/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443440
// Address: 0x0000000000443440

//----- (0000000000443440) ----------------------------------------------------
__int64 __fastcall sub_443440(
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
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i *v12; // r12
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  double v20; // xmm4_8
  double v21; // xmm5_8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // rax
  unsigned __int8 v26[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+18h] [rbp-30h]
  unsigned __int64 v29; // [rsp+28h] [rbp-20h]

  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 24);
  v29 = __readfsqword(0x28u);
  v12 = (__m128i *)(v11 + 32 * v10 - 32);
  if ( !(unsigned int)sub_441D50((__int64)v12, a3, a4, a5, a6, a7, a8, a9, a10) )
  {
    v15 = v12->m128i_i64[1];
    v16 = *(_QWORD *)a2;
    v26[0] = 2;
    v17 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = v15;
    *(_QWORD *)(a2 + 8) = v12[1].m128i_i64[0];
    *(_QWORD *)(a2 + 16) = v12[1].m128i_i64[1];
    v12[1] = v17;
    v12->m128i_i64[1] = v16;
    v18 = *(_QWORD *)(a1 + 32);
    v19 = *(_QWORD *)(a1 + 24);
    v27 = 0;
    v28 = 0;
    sub_4418C0(v26, (unsigned __int8 *)(v19 + 32 * v18 - 32), 0.0, a4, a5, a6, v13, v14, a9, a10);
    v22 = *(_QWORD *)(a1 + 32);
    if ( v22 )
    {
      v25 = v22 - 1;
      *(_QWORD *)(a1 + 32) = v25;
      sub_441540(*(_QWORD *)(a1 + 24) + 32 * v25, 0.0, a4, a5, a6, v20, v21, a9, a10);
    }
    sub_441540((__int64)v26, 0.0, a4, a5, a6, v20, v21, a9, a10);
    v23 = *(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32;
    if ( *(_BYTE *)v23 == 5 )
      return *(_QWORD *)(v23 + 8);
    sub_479EB0(0x5FCu);
  }
  return 0;
}
// 4434D9: variable 'v13' is possibly undefined
// 4434D9: variable 'v14' is possibly undefined
// 44353B: variable 'v20' is possibly undefined
// 44353B: variable 'v21' is possibly undefined

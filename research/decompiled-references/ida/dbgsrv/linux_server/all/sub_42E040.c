/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E040
// Address: 0x000000000042E040

//----- (000000000042E040) ----------------------------------------------------
__int64 __fastcall sub_42E040(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v12; // rbp
  __m128i *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  double v16; // xmm4_8
  double v17; // xmm5_8
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  double v23; // xmm4_8
  double v24; // xmm5_8
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  unsigned __int8 v31[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+18h] [rbp-40h]
  unsigned __int64 v34; // [rsp+28h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 432);
  if ( v9 <= 2 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1439);
    BUG();
  }
  v10 = *(_QWORD *)(a1 + 424);
  v12 = 32 * (v9 - 3);
  if ( !(unsigned __int8)sub_442A80(v10 + v12, a2, a3, a4, a5, a6, a7, a8, a9) )
    return 0xFFFFFFFFLL;
  v13 = (__m128i *)(v10 + v12 + 64);
  if ( *(_QWORD *)(v10 + v12 + 8) )
    v13 = (__m128i *)(v10 + v12 + 32);
  sub_43CF00((__m128i *)(v10 + v12), v13);
  v31[0] = 2;
  v14 = *(_QWORD *)(a1 + 432);
  v15 = *(_QWORD *)(a1 + 424);
  v32 = 0;
  v33 = 0;
  sub_4418C0(v31, (unsigned __int8 *)(v15 + 32 * v14 - 32), 0.0, a3, a4, a5, v16, v17, a8, a9);
  v20 = *(_QWORD *)(a1 + 432);
  if ( v20 )
  {
    v30 = v20 - 1;
    *(_QWORD *)(a1 + 432) = v30;
    sub_441540(*(_QWORD *)(a1 + 424) + 32 * v30, 0.0, a3, a4, a5, v18, v19, a8, a9);
  }
  sub_441540((__int64)v31, 0.0, a3, a4, a5, v18, v19, a8, a9);
  v31[0] = 2;
  v21 = *(_QWORD *)(a1 + 432);
  v22 = *(_QWORD *)(a1 + 424);
  v32 = 0;
  v33 = 0;
  sub_4418C0(v31, (unsigned __int8 *)(v22 + 32 * v21 - 32), 0.0, a3, a4, a5, v23, v24, a8, a9);
  v27 = *(_QWORD *)(a1 + 432);
  if ( v27 )
  {
    v29 = v27 - 1;
    *(_QWORD *)(a1 + 432) = v29;
    sub_441540(*(_QWORD *)(a1 + 424) + 32 * v29, 0.0, a3, a4, a5, v25, v26, a8, a9);
  }
  sub_441540((__int64)v31, 0.0, a3, a4, a5, v25, v26, a8, a9);
  return 0;
}
// 42E0DC: variable 'v16' is possibly undefined
// 42E0DC: variable 'v17' is possibly undefined
// 42E1AE: variable 'v18' is possibly undefined
// 42E1AE: variable 'v19' is possibly undefined
// 42E129: variable 'v23' is possibly undefined
// 42E129: variable 'v24' is possibly undefined
// 42E18E: variable 'v25' is possibly undefined
// 42E18E: variable 'v26' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;

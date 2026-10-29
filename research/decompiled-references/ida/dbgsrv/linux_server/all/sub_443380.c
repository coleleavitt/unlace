/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443380
// Address: 0x0000000000443380

//----- (0000000000443380) ----------------------------------------------------
__int64 __fastcall sub_443380(
        __int64 a1,
        __m128i *a2,
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
  int v12; // edx
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 v22[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+18h] [rbp-30h]
  unsigned __int64 v25; // [rsp+28h] [rbp-20h]

  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(a1 + 24);
  v25 = __readfsqword(0x28u);
  v12 = sub_442230(a2, (__m128i *)(v11 + 32 * v10 - 32), a3, a4, a5, a6, a7, a8, a9, a10);
  result = 0;
  if ( !v12 )
  {
    v16 = *(_QWORD *)(a1 + 32);
    v17 = *(_QWORD *)(a1 + 24);
    v22[0] = 2;
    v23 = 0;
    v24 = 0;
    sub_4418C0(v22, (unsigned __int8 *)(v17 + 32 * v16 - 32), 0.0, a4, a5, a6, v13, v14, a9, a10);
    v20 = *(_QWORD *)(a1 + 32);
    if ( v20 )
    {
      v21 = v20 - 1;
      *(_QWORD *)(a1 + 32) = v21;
      sub_441540(*(_QWORD *)(a1 + 24) + 32 * v21, 0.0, a4, a5, a6, v18, v19, a9, a10);
    }
    sub_441540((__int64)v22, 0.0, a4, a5, a6, v18, v19, a9, a10);
    return 1;
  }
  return result;
}
// 4433FD: variable 'v13' is possibly undefined
// 4433FD: variable 'v14' is possibly undefined
// 443433: variable 'v18' is possibly undefined
// 443433: variable 'v19' is possibly undefined

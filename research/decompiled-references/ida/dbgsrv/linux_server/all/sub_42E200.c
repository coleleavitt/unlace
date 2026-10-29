/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E200
// Address: 0x000000000042E200

//----- (000000000042E200) ----------------------------------------------------
__int64 __fastcall sub_42E200(
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
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  __int64 v12; // rax
  char *v13; // rsi
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  double v17; // xmm4_8
  double v18; // xmm5_8
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // rax
  char *v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v26; // [rsp+8h] [rbp-40h]
  __int64 v27; // [rsp+18h] [rbp-30h]
  unsigned __int64 v28; // [rsp+28h] [rbp-20h]

  v9 = *(_QWORD **)(a1 + 192);
  v10 = *(_QWORD *)(a1 + 144);
  v28 = __readfsqword(0x28u);
  v12 = v9[9];
  if ( v12 )
  {
    if ( v12 + *(_DWORD *)(a1 + 448) + 1 != v10 )
      return sub_479EB0(0x4F4u);
  }
  else
  {
    *(_DWORD *)(a1 + 448) = v10 - 1;
    v12 = v9[9];
  }
  v13 = (char *)v9[8];
  if ( v9[10] < (unsigned __int64)(v12 + 1) )
  {
    v23 = (char *)sub_481540((__int64)(v9 + 8), v13, v12 + 1, 0x20u);
    v9[8] = v23;
    v13 = v23;
    v12 = v9[9];
  }
  v14 = &v13[32 * v12];
  *v14 = 2;
  *((_QWORD *)v14 + 3) = 0;
  *(_OWORD *)(v14 + 8) = 0;
  ++v9[9];
  if ( *(_QWORD *)(a1 + 432) != 1 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1437);
    BUG();
  }
  sub_43CF00((__m128i *)v14, *(__m128i **)(a1 + 424));
  v25[0] = 2;
  v15 = *(_QWORD *)(a1 + 432);
  v16 = *(_QWORD *)(a1 + 424);
  v26 = 0;
  v27 = 0;
  sub_4418C0(v25, (unsigned __int8 *)(v16 + 32 * v15 - 32), 0.0, a3, a4, a5, v17, v18, a8, a9);
  v21 = *(_QWORD *)(a1 + 432);
  if ( v21 )
  {
    v24 = v21 - 1;
    *(_QWORD *)(a1 + 432) = v24;
    sub_441540(*(_QWORD *)(a1 + 424) + 32 * v24, 0.0, a3, a4, a5, v19, v20, a8, a9);
  }
  sub_441540((__int64)v25, 0.0, a3, a4, a5, v19, v20, a8, a9);
  return 0;
}
// 42E2BE: variable 'v17' is possibly undefined
// 42E2BE: variable 'v18' is possibly undefined
// 42E379: variable 'v19' is possibly undefined
// 42E379: variable 'v20' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442120
// Address: 0x0000000000442120

//----- (0000000000442120) ----------------------------------------------------
char *__fastcall sub_442120(
        __int64 a1,
        char *a2,
        unsigned __int8 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char *v11; // rbx
  __int64 v12; // rdx
  char *v13; // r13
  double v14; // xmm4_8
  double v15; // xmm5_8
  double v16; // xmm4_8
  double v17; // xmm5_8
  void *v19; // rax
  unsigned __int8 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+18h] [rbp-40h]
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v11 = a2;
  v23 = __readfsqword(0x28u);
  v20[0] = 2;
  v22 = 0;
  v21 = 0;
  sub_4418C0(v20, a3, 0.0, a5, a6, a7, a8, a9, a10, a11);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = &a2[-*(_QWORD *)a1];
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v12 + 1) )
  {
    v19 = sub_481540(a1, *(void **)a1, v12 + 1, 0x20u);
    *(_QWORD *)a1 = v19;
    v12 = *(_QWORD *)(a1 + 8);
    v11 = &v13[(_QWORD)v19];
  }
  memmove(v11 + 32, v11, 32 * v12 - (_QWORD)v13);
  *v11 = 2;
  *((_QWORD *)v11 + 3) = 0;
  *(_OWORD *)(v11 + 8) = 0;
  sub_4418C0((unsigned __int8 *)v11, v20, 0.0, a5, a6, a7, v14, v15, a10, a11);
  ++*(_QWORD *)(a1 + 8);
  sub_441540((__int64)v20, 0.0, a5, a6, a7, v16, v17, a10, a11);
  return v11;
}
// 4421A6: variable 'v14' is possibly undefined
// 4421A6: variable 'v15' is possibly undefined
// 4421B3: variable 'v16' is possibly undefined
// 4421B3: variable 'v17' is possibly undefined

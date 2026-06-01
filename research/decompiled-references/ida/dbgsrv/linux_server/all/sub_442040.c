/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442040
// Address: 0x0000000000442040

//----- (0000000000442040) ----------------------------------------------------
unsigned __int64 __fastcall sub_442040(
        char **a1,
        unsigned __int8 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v11; // xmm4_8
  double v12; // xmm5_8
  char *v13; // rax
  char *v14; // rsi
  char *v15; // rdi
  double v16; // xmm4_8
  double v17; // xmm5_8
  char *v19; // rax
  unsigned __int8 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0 = 2;
  vars18 = 0;
  vars8 = 0;
  sub_4418C0(&vars0, a2, 0.0, a4, a5, a6, a7, a8, a9, a10);
  v13 = a1[1];
  v14 = *a1;
  if ( a1[2] < v13 + 1 )
  {
    v19 = (char *)sub_481540((__int64)a1, v14, (unsigned __int64)(v13 + 1), 0x20u);
    *a1 = v19;
    v14 = v19;
    v13 = a1[1];
  }
  v15 = &v14[32 * (_QWORD)v13];
  *v15 = 2;
  *((_QWORD *)v15 + 3) = 0;
  *(_OWORD *)(v15 + 8) = 0;
  sub_4418C0((unsigned __int8 *)v15, &vars0, 0.0, a4, a5, a6, v11, v12, a9, a10);
  ++a1[1];
  sub_441540((__int64)&vars0, 0.0, a4, a5, a6, v16, v17, a9, a10);
  return vars28 - __readfsqword(0x28u);
}
// 4420A7: variable 'v11' is possibly undefined
// 4420A7: variable 'v12' is possibly undefined
// 4420B4: variable 'v16' is possibly undefined
// 4420B4: variable 'v17' is possibly undefined

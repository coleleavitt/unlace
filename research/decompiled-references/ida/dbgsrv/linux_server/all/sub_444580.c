/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444580
// Address: 0x0000000000444580

//----- (0000000000444580) ----------------------------------------------------
unsigned __int64 __fastcall sub_444580(
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
  signed int v9; // r13d
  __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm4_8
  double v14; // xmm5_8
  const char *v15; // rbp
  double v16; // xmm4_8
  double v17; // xmm5_8
  double v18; // xmm4_8
  double v19; // xmm5_8
  size_t v20; // rax
  size_t v21; // r14
  double v22; // xmm4_8
  double v23; // xmm5_8
  size_t v25; // r15
  __m128i v26; // [rsp+0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+10h] [rbp-58h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v9 = sub_479E90();
  v10 = sub_439DA0("exception");
  sub_442A20(a1, v10, a2, a3, a4, a5, v11, v12, a8, a9);
  v26.m128i_i8[0] = 2;
  v26.m128i_i64[1] = v9;
  v27 = 0;
  sub_443F90(a1, "qerrno", &v26, 0, 0.0, a3, a4, a5, v13, v14, a8, a9);
  v15 = sub_482380(-1);
  sub_441540((__int64)&v26, 0.0, a3, a4, a5, v16, v17, a8, a9);
  if ( v15 )
  {
    v20 = strlen(v15);
    v26.m128i_i8[0] = 7;
    v26.m128i_i64[1] = 0;
    v21 = v20;
    v27 = 0;
    if ( v20 )
    {
      v25 = v20 + 1;
      v26.m128i_i64[1] = (__int64)sub_481540((__int64)&v26.m128i_i64[1], nullptr, v20 + 1, 1u);
      *(_QWORD *)&v27 = v25;
      memmove((void *)v26.m128i_i64[1], v15, v21);
      *(_BYTE *)(v26.m128i_i64[1] + v21) = 0;
    }
  }
  else
  {
    v26.m128i_i8[0] = 7;
    v26.m128i_i64[1] = 0;
    v27 = 0;
  }
  sub_443F90(a1, "description", &v26, 0, 0.0, a3, a4, a5, v18, v19, a8, a9);
  sub_479EB0(v9);
  sub_441540((__int64)&v26, 0.0, a3, a4, a5, v22, v23, a8, a9);
  return v28 - __readfsqword(0x28u);
}
// 4445BC: variable 'v11' is possibly undefined
// 4445BC: variable 'v12' is possibly undefined
// 4445E5: variable 'v13' is possibly undefined
// 4445E5: variable 'v14' is possibly undefined
// 4445FA: variable 'v16' is possibly undefined
// 4445FA: variable 'v17' is possibly undefined
// 44463D: variable 'v18' is possibly undefined
// 44463D: variable 'v19' is possibly undefined
// 44464D: variable 'v22' is possibly undefined
// 44464D: variable 'v23' is possibly undefined

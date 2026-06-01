/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441FA0
// Address: 0x0000000000441FA0

//----- (0000000000441FA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_441FA0(
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
  __int64 v9; // rax
  __int64 v10; // rdx
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rdi
  __int64 v16; // rdi
  unsigned __int8 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 24);
  vars28 = __readfsqword(0x28u);
  vars0 = 2;
  vars8 = 0;
  vars18 = 0;
  sub_4418C0(&vars0, (unsigned __int8 *)(v10 + 32 * v9 - 32), 0.0, a3, a4, a5, a6, a7, a8, a9);
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    v16 = v14 - 1;
    *(_QWORD *)(a1 + 32) = v16;
    sub_441540(*(_QWORD *)(a1 + 24) + 32 * v16, 0.0, a3, a4, a5, v12, v13, a8, a9);
  }
  sub_441540((__int64)&vars0, 0.0, a3, a4, a5, v12, v13, a8, a9);
  return vars28 - __readfsqword(0x28u);
}
// 442028: variable 'v12' is possibly undefined
// 442028: variable 'v13' is possibly undefined

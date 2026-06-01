/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45ADA0
// Address: 0x000000000045ADA0

//----- (000000000045ADA0) ----------------------------------------------------
__int64 __fastcall sub_45ADA0(
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
  __int64 v10; // rbp
  __int64 v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v15; // rbp
  _QWORD v16[5]; // [rsp+0h] [rbp-28h] BYREF

  v10 = *(_QWORD *)(a1 + 8);
  v16[1] = __readfsqword(0x28u);
  v11 = sub_45A880();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
         v11,
         v10,
         v16,
         8,
         0) != 8 )
    return sub_42D8B0(a2, "read error", a3, a4, a5, a6, v12, v13, a9, a10);
  v15 = v16[0];
  sub_441540(a2, a3, a4, a5, a6, v12, v13, a9, a10);
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 8) = v15;
  return 0;
}
// 45ADEA: variable 'v12' is possibly undefined
// 45ADEA: variable 'v13' is possibly undefined

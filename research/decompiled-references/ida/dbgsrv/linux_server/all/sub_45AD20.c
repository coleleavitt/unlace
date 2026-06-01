/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AD20
// Address: 0x000000000045AD20

//----- (000000000045AD20) ----------------------------------------------------
__int64 __fastcall sub_45AD20(
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
  unsigned int v15; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v10 = *(_QWORD *)(a1 + 8);
  v16 = __readfsqword(0x28u);
  v11 = sub_45A880();
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)v11 + 288LL))(
         v11,
         v10,
         &v15,
         4,
         0) != 4 )
    return sub_42D8B0(a2, "read error", a3, a4, a5, a6, v12, v13, a9, a10);
  *(_QWORD *)(a2 + 8) = v15;
  return 0;
}
// 45AD92: variable 'v12' is possibly undefined
// 45AD92: variable 'v13' is possibly undefined

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442A20
// Address: 0x0000000000442A20

//----- (0000000000442A20) ----------------------------------------------------
__int64 __fastcall sub_442A20(
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
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // r12

  if ( !a1 )
    return sub_479EB0(0x5FCu);
  sub_441540(a1, a3, a4, a5, a6, a7, a8, a9, a10);
  *(_BYTE *)a1 = 5;
  v11 = operator new(0x38u);
  v12 = 0;
  v13 = v11;
  if ( a2 )
    v12 = *(_DWORD *)(a2 + 52);
  sub_438700(v11, v12);
  *(_QWORD *)(a1 + 8) = v13;
  return 0;
}

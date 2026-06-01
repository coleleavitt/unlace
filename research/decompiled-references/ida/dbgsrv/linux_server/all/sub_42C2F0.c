/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C2F0
// Address: 0x000000000042C2F0

//----- (000000000042C2F0) ----------------------------------------------------
__int64 __fastcall sub_42C2F0(
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
  unsigned __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi

  v10 = *(_QWORD *)(a1 + 8);
  v12 = -1;
  if ( v10 < (unsigned __int64)xmmword_4C80A8 )
  {
    v13 = *(_QWORD *)(qword_4C80A0 + 8 * v10);
    if ( v13 )
    {
      --*(_QWORD *)(a2 + 8);
      v12 = (int)sub_435B00(
                   (__int64 (__fastcall *)(__int64, __int64))sub_42C340,
                   v13,
                   a1 + 32,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9,
                   a10);
    }
  }
  *(_QWORD *)(a2 + 8) = v12;
  return 0;
}
// 4C80A0: using guessed type __int64 qword_4C80A0;
// 4C80A8: using guessed type __int128 xmmword_4C80A8;

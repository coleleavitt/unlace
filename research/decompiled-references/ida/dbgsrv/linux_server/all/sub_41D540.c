/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D540
// Address: 0x000000000041D540

//----- (000000000041D540) ----------------------------------------------------
__int64 __fastcall sub_41D540(
        __int64 a1,
        __int64 a2,
        __off64_t a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  if ( (unsigned int)sub_41D160(
                       a1,
                       0xFFFFFFFF,
                       a3,
                       (unsigned __int64 *)(a2 + 8),
                       1,
                       0,
                       a4,
                       a5,
                       a6,
                       a7,
                       a8,
                       a9,
                       a10,
                       a11) != 1
    || !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __off64_t, __int64))(*(_QWORD *)a1 + 312LL))(
          a1,
          0,
          4,
          a3,
          0xFFFFFFFFLL) )
  {
    return 0;
  }
  *(_QWORD *)a2 = a3;
  *(_BYTE *)(a2 + 9) = 1;
  return 1;
}

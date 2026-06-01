__int64 __fastcall sub_6F8A10(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 result; // rax
  unsigned int v13; // eax
  __int64 v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8

  if ( !*(_QWORD *)(a2 + 40)
    || (result = sub_6F7D60(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a3 + 8), a4, a5, a6, a7, a8, a9, a10, a11),
        (_BYTE)result) )
  {
    v13 = sub_F487E0(*(_QWORD *)(a2 + 32));
    return sub_6F74E0(
             a1,
             *(_QWORD *)(a2 + 32),
             v13 * ((a3 != -16) + (a3 + 16 - (unsigned __int64)(a3 != -16)) / v13),
             v13,
             v14,
             a4,
             a5,
             a6,
             a7,
             v15,
             v16,
             a10,
             a11);
  }
  return result;
}


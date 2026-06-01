/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441D70
// Address: 0x0000000000441D70

//----- (0000000000441D70) ----------------------------------------------------
__int64 __fastcall sub_441D70(
        unsigned __int8 *a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int8 *v10; // rax
  unsigned __int8 v11; // dl

  v10 = sub_4419D0(a1, 0, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v10 )
  {
    v11 = *v10;
    if ( *v10 == 2 || v11 == 9 )
    {
      *((_QWORD *)v10 + 1) += a2;
      return 1;
    }
    if ( v11 == 3 )
    {
      sub_47B4C0((__int64)(v10 + 8), (__int64)&qword_4A27E0, v10 + 8, a2 == -1);
      return 1;
    }
    sub_479EB0(0x3Du);
  }
  return 0;
}
// 4A27E0: using guessed type __int64 qword_4A27E0;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439AA0
// Address: 0x0000000000439AA0

//----- (0000000000439AA0) ----------------------------------------------------
bool __fastcall sub_439AA0(
        __int64 a1,
        const char *a2,
        __m128i *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v12; // rax
  __int64 v13; // rax
  __m128i *v14; // [rsp+8h] [rbp-10h]

  if ( a1 && *(_BYTE *)a1 == 7 )
  {
    v12 = s1;
    if ( *(_QWORD *)(a1 + 16) )
      v12 = *(const char **)(a1 + 8);
    v14 = a3;
    v13 = sub_439A80(v12);
    a3 = v14;
    a1 = v13;
  }
  return (unsigned int)sub_443F90(a1, a2, a3, 0, a4, a5, a6, a7, a8, a9, a10, a11) == 0;
}
// 439AB0: variable 'a8' is possibly undefined
// 439AB0: variable 'a9' is possibly undefined

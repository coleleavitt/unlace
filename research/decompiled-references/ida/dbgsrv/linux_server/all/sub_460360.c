/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460360
// Address: 0x0000000000460360

//----- (0000000000460360) ----------------------------------------------------
double __fastcall sub_460360(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13,
        __int64 a14,
        char a15)
{
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5

  v16 = *a5;
  v17 = *a5;
  do
  {
    if ( v17 >= a5[1] )
    {
      v16 = 0;
      goto LABEL_5;
    }
    ++v17;
  }
  while ( *(_BYTE *)(v17 - 1) );
  *a5 = v17;
LABEL_5:
  *a2 = v16;
  *a3 = sub_47FD50(a5, a5[1]);
  v20 = sub_47FD50(a5, a5[1]);
  *a4 = v20;
  if ( *(_BYTE *)(a1 + 184) )
    *(double *)a6.m128_u64 = sub_410EA0(
                               (int)"file_path = %s; arch = %d; is_be = %d.\n",
                               *a2,
                               (unsigned int)*a3,
                               v20,
                               v21,
                               v22,
                               a6,
                               a7,
                               a8,
                               a9,
                               v23,
                               v24,
                               a12,
                               a13,
                               a15);
  return *(double *)a6.m128_u64;
}
// 460402: variable 'v21' is possibly undefined
// 460402: variable 'v22' is possibly undefined
// 460402: variable 'v23' is possibly undefined
// 460402: variable 'v24' is possibly undefined

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436F80
// Address: 0x0000000000436F80

//----- (0000000000436F80) ----------------------------------------------------
__int64 __fastcall sub_436F80(
        __m128i *a1,
        __int64 a2,
        const char *a3,
        __m128 **a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__m128i *, __int64, const char *, __m128 **, double, double, double, double, double, double, double, double); // rax
  __int64 result; // rax
  __m128 *v21; // rsi
  __m128 si128; // xmm0
  __m128 *v23; // rax

  v15 = sub_436BE0();
  if ( v15 )
  {
    v18 = v15;
    v19 = *(__int64 (__fastcall **)(__m128i *, __int64, const char *, __m128 **, double, double, double, double, double, double, double, double))(v15 + 64);
    if ( v19 )
    {
      result = v19(
                 a1,
                 a2,
                 a3,
                 a4,
                 a5,
                 *(double *)a6.m128_u64,
                 *(double *)a7.m128_u64,
                 *(double *)a8.m128_u64,
                 v16,
                 v17,
                 *(double *)a11.m128_u64,
                 *(double *)a12.m128_u64);
    }
    else
    {
      if ( a4 )
        sub_4172B0(
          (__int64)a4,
          "the '%s' extlang des not implement the 'eval_expr' callback",
          *(const char **)(v18 + 16));
      result = 0;
    }
    --*(_DWORD *)(v18 + 12);
  }
  else
  {
    v21 = *a4;
    if ( (unsigned __int64)a4[2] <= 0x15 )
    {
      v23 = (__m128 *)sub_481540((__int64)a4, v21, 0x16u, 1u);
      *a4 = v23;
      v21 = v23;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_48F570);
    a4[1] = (__m128 *)22;
    *v21 = si128;
    *(unsigned __int64 *)((char *)&v21->m128_u64[1] + 5) = 0x6465726574736967LL;
    (*a4)[1].m128_i8[5] = 0;
    return sub_436F00(a1, a2, a3, (__int64)a4, si128, a6, a7, a8, v16, v17, a11, a12);
  }
  return result;
}
// 436FB6: variable 'v16' is possibly undefined
// 436FB6: variable 'v17' is possibly undefined
// 48F570: using guessed type __int128 xmmword_48F570;

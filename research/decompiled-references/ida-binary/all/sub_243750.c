bool __fastcall sub_243750(
        int *a1,
        const void *a2,
        unsigned __int8 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  bool result; // al
  int v13; // edi
  __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  unsigned int v21; // r12d
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5

  if ( !a1 || dword_8CC5F0 >= 0 )
    return 0;
  v13 = *a1;
  result = dbg
        && v13
        && (unsigned __int8)sub_22D320(v13, a2)
        && dword_8CC5F0 < 0
        && (v21 = 8 * a3,
            v22 = v21 | ((_DWORD)a2 << 12) | 2,
            (int)sub_241C80((__int64)a1, v22, v15, v16, v17, v18, a4, a5, a6, a7, v19, v20, a10, a11) > 0)
        && (int)sub_2424A0(v21, v22, a4, a5, a6, a7, v27, v28, a10, a11, v23, v24, v25, v26) > 0;
  return result;
}

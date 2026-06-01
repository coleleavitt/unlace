__m128 *__fastcall sub_7A65F0(
        const __m128i *a1,
        unsigned __int64 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        const __m128i *a6,
        double a7,
        int a8,
        const __m128i *a9)
{
  __int64 v9; // rax

  v9 = a1[1].m128i_i64[1];
  if ( v9 && *(_BYTE *)(v9 + 352) )
    return sub_7A5A00(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  else
    return nullptr;
}


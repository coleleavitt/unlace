__m128 *__fastcall sub_7A6F60(const __m128i *a1, unsigned __int64 *a2, unsigned int a3, unsigned int *a4, double a5)
{
  __int64 v5; // rax
  const __m128i *v7; // r9
  __int64 v8; // rax

  v5 = a1[1].m128i_i64[1];
  if ( !v5 || !*(_BYTE *)(v5 + 352) )
    return nullptr;
  sub_7A4170(a1);
  v7 = (const __m128i *)a1[515].m128i_i64[1];
  if ( v7 )
    v7[-1].m128i_i32[3] = 0;
  v8 = a1[1].m128i_i64[1];
  if ( v8 && *(_BYTE *)(v8 + 352) )
    return sub_7A5A00(a1, a2, a3, a4, 0, v7, a5, 0, nullptr);
  else
    return nullptr;
}


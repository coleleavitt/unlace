_QWORD *__fastcall sub_1189900(_QWORD *a1)
{
  int v1; // edx
  size_t v2; // rax
  const __m128i *v3; // rbp
  size_t v4; // rdx
  _QWORD *result; // rax
  size_t v6; // rax
  _QWORD *v7; // rdx

  v1 = *(_DWORD *)(*a1 + 64LL);
  if ( v1 != 2 && (*(_BYTE *)(*a1 + 60LL) & 8) == 0 && v1 != 8 )
  {
    v2 = j__strlen(&byte_22F0C30);
    v3 = (const __m128i *)a1[1];
    v4 = v3->m128i_u64[1];
    if ( v4 == v2 && (!v4 || !memcmp((const void *)v3->m128i_i64[0], &byte_22F0C30, v4)) )
    {
      if ( *(_BYTE *)a1[3] )
      {
        v6 = j__strlen("on");
        v7 = (_QWORD *)a1[2];
        *v7 = "on";
        v7[1] = v6;
      }
    }
    else
    {
      *(__m128i *)a1[2] = _mm_loadu_si128(v3);
    }
  }
  result = (_QWORD *)a1[4];
  *result = &byte_22F0C30;
  result[1] = 0;
  return result;
}

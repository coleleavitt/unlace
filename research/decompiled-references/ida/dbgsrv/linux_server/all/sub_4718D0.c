/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4718D0
// Address: 0x00000000004718D0

//----- (00000000004718D0) ----------------------------------------------------
const char *__fastcall sub_4718D0(__int64 a1)
{
  const char *v1; // rbp
  const char *v2; // rax
  const char *result; // rax
  __m128i *v4; // rsi
  __m128i si128; // xmm0
  const char *v6; // rax
  __m128i *v7; // rax

  v1 = *(const char **)(a1 + 88);
  if ( !strcmp(v1, "gai_strerror") )
  {
    v6 = gai_strerror(*(_DWORD *)(a1 + 96));
    sub_4172B0(a1 + 64, "getaddrinfo: %s", v6);
  }
  else if ( !strcmp(v1, "connection_closed_by_peer") )
  {
    v4 = *(__m128i **)(a1 + 64);
    if ( *(_QWORD *)(a1 + 80) <= 0x1Fu )
    {
      v7 = (__m128i *)sub_481540(a1 + 64, v4, 0x20u, 1u);
      *(_QWORD *)(a1 + 64) = v7;
      v4 = v7;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_48F5C0);
    *(_QWORD *)(a1 + 72) = 32;
    *v4 = si128;
    *(__m128i *)((char *)v4 + 15) = _mm_load_si128((const __m128i *)&xmmword_48F5D0);
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + 31LL) = 0;
  }
  else
  {
    v2 = (const char *)sub_481FB0(*(_DWORD *)(a1 + 96));
    sub_4172B0(a1 + 64, "%s: %s", *(const char **)(a1 + 88), v2);
  }
  result = s1;
  if ( *(_QWORD *)(a1 + 72) )
    return *(const char **)(a1 + 64);
  return result;
}
// 48F5C0: using guessed type __int128 xmmword_48F5C0;
// 48F5D0: using guessed type __int128 xmmword_48F5D0;

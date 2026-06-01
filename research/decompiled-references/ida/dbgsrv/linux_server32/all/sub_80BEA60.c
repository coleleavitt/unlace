/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BEA60
// Address: 0x080BEA60

//----- (080BEA60) --------------------------------------------------------
int *__cdecl sub_80BEA60(_DWORD *a1)
{
  const char *v1; // edi
  int *result; // eax
  _OWORD *v3; // eax
  __m128i si128; // xmm0
  const char *v5; // [esp-8h] [ebp-14h]
  void *v6; // [esp-4h] [ebp-10h]

  v1 = (const char *)a1[11];
  if ( !strcmp(v1, "gai_strerror") )
  {
    v5 = gai_strerror(a1[12]);
    sub_805ED10(a1 + 8, "getaddrinfo: %s", v5);
  }
  else if ( !strcmp(v1, "connection_closed_by_peer") )
  {
    v3 = (_OWORD *)a1[8];
    if ( a1[10] <= 0x1Fu )
    {
      v3 = sub_80CF920((int)(a1 + 8), v3, 0x20u, 1u);
      a1[8] = v3;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_80DE2A0);
    a1[9] = 32;
    *v3 = si128;
    *(__m128i *)((char *)v3 + 15) = _mm_load_si128((const __m128i *)&xmmword_80DE2B0);
    *(_BYTE *)(a1[8] + 31) = 0;
  }
  else
  {
    v6 = sub_80D0500(a1[12]);
    sub_805ED10(a1 + 8, "%s: %s", a1[11], v6);
  }
  result = &dword_80DDFD8;
  if ( a1[9] )
    return (int *)a1[8];
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 80DE2A0: using guessed type __int128 xmmword_80DE2A0;
// 80DE2B0: using guessed type __int128 xmmword_80DE2B0;

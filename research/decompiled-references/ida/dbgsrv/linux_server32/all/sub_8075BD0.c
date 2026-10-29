/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8075BD0
// Address: 0x08075BD0

//----- (08075BD0) --------------------------------------------------------
int __cdecl sub_8075BD0(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  _DWORD *v3; // esi
  void *v4; // eax
  __m128i v5; // xmm0
  int v6; // eax
  int v7; // esi
  int v9; // [esp+4h] [ebp-28h]
  unsigned int v10; // [esp+8h] [ebp-24h]
  size_t n; // [esp+Ch] [ebp-20h]
  char *s; // [esp+10h] [ebp-1Ch]

  v10 = *(_DWORD *)(a1[47] + 4 * a1[48] - 4);
  s = (char *)&dword_80DDFD8;
  if ( a1[6] )
    s = (char *)a1[5];
  v9 = operator new(0x10u);
  *(_DWORD *)(v9 + 12) = 0;
  *(_DWORD *)v9 = 5;
  v1 = (_DWORD *)operator new(0xCu);
  v2 = a1;
  *v1 = 0;
  v3 = v1;
  v1[1] = 0;
  v1[2] = 0;
  if ( s )
  {
    n = strlen(s);
    v4 = sub_80CF920((int)v3, nullptr, n + 1, 1u);
    *v3 = v4;
    v3[1] = n + 1;
    memmove(v4, s, n);
    v2 = a1;
    *(_BYTE *)(*v3 + n) = 0;
  }
  v5 = _mm_cvtsi32_si128((unsigned int)v3);
  v6 = v2[47];
  v7 = v2[48];
  *(_QWORD *)(v9 + 4) = _mm_unpacklo_epi32(v5, _mm_cvtsi32_si128(v10)).m128i_u64[0];
  *(_DWORD *)(v6 + 4 * v7 - 4) = v9;
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;

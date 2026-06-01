unsigned __int64 __fastcall sub_759F40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v4; // xmm1
  char v5; // cl
  int v6; // esi
  __m128i v7; // xmm0
  char v8; // dl
  __m128i v9; // xmm1
  char v10; // dl
  char v11; // dl

  v2 = a2[274];
  a2[284] += 64LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 64 && v2 )
    a2[274] = result + 64;
  else
    result = sub_722150((__int64)(a2 + 274), 64, 3);
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(_BYTE *)(a1 + 56);
  v6 = *(_DWORD *)(a1 + 52);
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 36));
  *(_WORD *)(result + 32) = 428;
  v8 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v4;
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  *(_DWORD *)(result + 52) = v6;
  v8 &= 0xE0u;
  *(_BYTE *)(result + 56) = v5;
  *(_BYTE *)(result + 34) = v8;
  *(__m128i *)(result + 16) = v9;
  *(__m128i *)(result + 36) = v7;
  v10 = *(_BYTE *)(a1 + 34) & 1 | v8;
  *(_BYTE *)(result + 34) = v10;
  v11 = *(_BYTE *)(a1 + 34) & 2 | v10;
  *(_BYTE *)(result + 34) = v11;
  *(_BYTE *)(result + 34) = *(_BYTE *)(a1 + 34) & 4 | v11;
  return result;
}


unsigned __int64 __fastcall sub_73BCC0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v4; // xmm0
  int v5; // ecx
  __int64 v6; // rsi
  char v7; // dl
  __m128i v8; // xmm0
  char v9; // dl
  char v10; // dl

  v2 = a2[274];
  a2[284] += 48LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 48 && v2 )
    a2[274] = result + 48;
  else
    result = sub_722150((__int64)(a2 + 274), 48, 3);
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(_DWORD *)(a1 + 44);
  v6 = *(_QWORD *)(a1 + 36);
  *(_WORD *)(result + 32) = 219;
  v7 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v4;
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  *(_QWORD *)(result + 36) = v6;
  v7 &= 0xE0u;
  *(_DWORD *)(result + 44) = v5;
  *(_BYTE *)(result + 34) = v7;
  *(__m128i *)(result + 16) = v8;
  v9 = *(_BYTE *)(a1 + 34) & 1 | v7;
  *(_BYTE *)(result + 34) = v9;
  v10 = *(_BYTE *)(a1 + 34) & 2 | v9;
  *(_BYTE *)(result + 34) = v10;
  *(_BYTE *)(result + 34) = *(_BYTE *)(a1 + 34) & 4 | v10;
  return result;
}


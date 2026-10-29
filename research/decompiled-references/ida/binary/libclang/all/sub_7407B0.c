unsigned __int64 __fastcall sub_7407B0(_QWORD *a1, int a2, int a3, __int64 a4, const __m128i *a5)
{
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  __m128i v10; // xmm0
  char v11; // dl
  __m128i v12; // xmm0
  char v13; // dl

  v8 = a1[274];
  a1[284] += 56LL;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 56 && v8 )
    a1[274] = result + 56;
  else
    result = sub_722150((__int64)(a1 + 274), 56, 3);
  v10 = _mm_loadu_si128(a5);
  *(_WORD *)(result + 32) = 408;
  v11 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v10;
  v12 = _mm_loadu_si128(a5 + 1);
  *(_DWORD *)(result + 36) = a2;
  *(__m128i *)(result + 16) = v12;
  *(_BYTE *)(result + 34) = v11 & 0xE0 | 4;
  v13 = *(_BYTE *)(result + 30);
  *(_DWORD *)(result + 40) = a3;
  *(_QWORD *)(result + 48) = a4;
  if ( (~v13 & 0xF0) == 0 && !*(_QWORD *)result )
    *(_BYTE *)(result + 30) = v13 & 0xF;
  return result;
}


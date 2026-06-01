unsigned __int64 __fastcall sub_73C0D0(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  int v4; // edx
  __m128i v5; // xmm0

  v2 = a1[274];
  a1[284] += 40LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v2 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  v4 = *(_DWORD *)(result + 32);
  *(__m128i *)result = _mm_loadu_si128(a2);
  v5 = _mm_loadu_si128(a2 + 1);
  *(_DWORD *)(result + 32) = v4 & 0xE00000 | 0x57;
  *(__m128i *)(result + 16) = v5;
  return result;
}


unsigned __int64 __fastcall sub_7D6140(__int64 a1, _QWORD *a2, const __m128i *a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax

  result = 0;
  if ( (a3->m128i_i32[0] & 0x7FFFFFFF) != 0 )
  {
    v5 = a2[274];
    a2[284] += 32LL;
    v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[275] >= v6 + 32 && v5 )
      a2[274] = v6 + 32;
    else
      v6 = sub_7CF9B0((__int64)(a2 + 274), 32, 3);
    *(__m128i *)v6 = _mm_loadu_si128(a3);
    *(__m128i *)(v6 + 16) = _mm_loadu_si128(a3 + 1);
    result = v6 & 0xFFFFFFFFFFFFFFF9LL;
    *(_QWORD *)(a1 + 72) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
  }
  return result;
}


__int64 __fastcall sub_9A6C80(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax

  si128 = _mm_load_si128((const __m128i *)&xmmword_2383D40);
  *(_QWORD *)a1 = a1 + 24;
  *(__m128i *)(a1 + 8) = si128;
  if ( *(_QWORD *)(a2 + 8) )
  {
    sub_9A6BA0((void **)a1, (const void **)a2);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2383D40);
  }
  *(__m128i *)(a1 + 40) = si128;
  v3 = *(_QWORD *)(a2 + 40) == 0;
  *(_QWORD *)(a1 + 32) = a1 + 56;
  if ( !v3 )
    sub_9A6BA0((void **)(a1 + 32), (const void **)(a2 + 32));
  v4 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 64) = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 68);
  v5 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 72) = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 68);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  result = *(unsigned __int8 *)(a2 + 92);
  *(_BYTE *)(a1 + 92) = result;
  return result;
}


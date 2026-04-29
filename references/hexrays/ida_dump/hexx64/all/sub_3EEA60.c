__int64 __fastcall sub_3EEA60(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  __m128i si128; // xmm0

  if ( a1[21] == 8 )
  {
    sub_3EE900(a1, a2);
    return 1;
  }
  else
  {
    v2 = a1[101];
    si128 = _mm_load_si128((const __m128i *)&xmmword_424B20);
    *(_DWORD *)(a2 + 4) = 8;
    *(_QWORD *)(a2 + 24) = 0;
    *(_DWORD *)a2 = v2;
    *(__m128i *)(a2 + 8) = si128;
    return 1;
  }
}

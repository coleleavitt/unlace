__int64 __fastcall sub_687BA0(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __m128i si128; // xmm0
  void *v10[2]; // [rsp+0h] [rbp-38h] BYREF

  *(__m128i *)v10 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  v4 = sub_186B270(0xB0u);
  sub_E1F060(v4, a1);
  si128 = _mm_load_si128((const __m128i *)v10);
  *(_QWORD *)(v4 + 136) = 0;
  *(_QWORD *)v4 = &off_1C69460;
  *(_QWORD *)(v4 + 72) = off_1C69610;
  *(_QWORD *)(v4 + 144) = a3;
  *(__m128i *)(v4 + 120) = si128;
  if ( a3 )
    ++*(_DWORD *)(a3 + 48);
  sub_14B7810(v4 + 152, a1, a2, v5, v6, v7, v10[0]);
  sub_1474610(v4 + 168, a1, a2);
  sub_E5E9C0(v4, a2);
  return v4;
}


void __fastcall sub_163F60(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // eax
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i v8; // xmm0

  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(_DWORD *)(a1 + 808);
  v4 = (__int64 *)(a2 + 32);
  v5 = a1 + 160;
  *(_DWORD *)(v5 + 648) = v2;
  v6 = *(v4 - 4);
  *((_DWORD *)v4 - 2) = v3;
  v7 = *(_QWORD *)(v5 + 624);
  *(_QWORD *)(v5 + 624) = v6;
  v8 = _mm_loadu_si128((const __m128i *)(v5 + 632));
  *(_QWORD *)(v5 + 632) = *(v4 - 3);
  *(_QWORD *)(v5 + 640) = *(v4 - 2);
  *(v4 - 4) = v7;
  *(__m128i *)(v4 - 3) = v8;
  sub_F1B20((const __m128i *)v5, v4);
}


__int64 __fastcall sub_1F4820(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __m128i v8; // xmm0

  v2 = *(_DWORD *)(a2 + 24);
  v3 = *(_DWORD *)(a1 + 848);
  v4 = a2 + 32;
  v5 = a1 + 104;
  *(_DWORD *)(v5 + 744) = v2;
  v6 = *(_QWORD *)(v4 - 32);
  *(_DWORD *)(v4 - 8) = v3;
  v7 = *(_QWORD *)(v5 + 720);
  *(_QWORD *)(v5 + 720) = v6;
  v8 = _mm_loadu_si128((const __m128i *)(v5 + 728));
  *(_QWORD *)(v5 + 728) = *(_QWORD *)(v4 - 24);
  *(_QWORD *)(v5 + 736) = *(_QWORD *)(v4 - 16);
  *(_QWORD *)(v4 - 32) = v7;
  *(__m128i *)(v4 - 24) = v8;
  return sub_277BF0();
}

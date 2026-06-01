void __fastcall sub_15E8C0(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // eax
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __m128i v9; // xmm0

  *(_BYTE *)(a1 + 840) = a2 != 0;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 24);
    v4 = *(_DWORD *)(a1 + 808);
    v5 = (__int64 *)(a2 + 32);
    v6 = a1 + 160;
    *(_DWORD *)(v6 + 648) = v3;
    v7 = *(v5 - 4);
    *((_DWORD *)v5 - 2) = v4;
    v8 = *(_QWORD *)(v6 + 624);
    *(_QWORD *)(v6 + 624) = v7;
    v9 = _mm_loadu_si128((const __m128i *)(v6 + 632));
    *(_QWORD *)(v6 + 632) = *(v5 - 3);
    *(_QWORD *)(v6 + 640) = *(v5 - 2);
    *(v5 - 4) = v8;
    *(__m128i *)(v5 - 3) = v9;
    sub_F1B20((const __m128i *)v6, v5);
  }
  *(_BYTE *)(a1 + 953) = 1;
}


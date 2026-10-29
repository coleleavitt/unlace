__m128i *__fastcall sub_748D60(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __m128i *v3; // rbp
  __int8 v4; // al
  __int8 v5; // al

  v2 = a2[274];
  a2[284] += 144LL;
  v3 = (__m128i *)((v2 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)&v3[9] && v2 )
    a2[274] = v3 + 9;
  else
    v3 = (__m128i *)sub_722150((__int64)(a2 + 274), 144, 3);
  sub_748860(
    v3,
    (__int64)a2,
    (const __m128i *)a1,
    *(_DWORD *)(a1 + 36),
    *(_QWORD *)(a1 + 40),
    *(unsigned __int64 **)(a1 + 56),
    *(_DWORD *)(a1 + 48),
    *(unsigned __int64 **)(a1 + 72),
    *(_DWORD *)(a1 + 64),
    *(unsigned __int64 **)(a1 + 88),
    *(_DWORD *)(a1 + 80),
    *(unsigned __int64 **)(a1 + 104),
    *(_DWORD *)(a1 + 96),
    *(unsigned int **)(a1 + 120),
    *(_DWORD *)(a1 + 112),
    *(_QWORD **)(a1 + 136),
    *(_DWORD *)(a1 + 128));
  v4 = *(_BYTE *)(a1 + 34) & 1 | v3[2].m128i_i8[2] & 0xFE;
  v3[2].m128i_i8[2] = v4;
  v5 = *(_BYTE *)(a1 + 34) & 2 | v4 & 0xFD;
  v3[2].m128i_i8[2] = v5;
  v3[2].m128i_i8[2] = *(_BYTE *)(a1 + 34) & 4 | v5 & 0xFB;
  return v3;
}


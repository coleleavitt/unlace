__m128i *__fastcall sub_749610(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __m128i *v3; // rbp
  __int8 v4; // al
  __int8 v5; // al

  v2 = a2[274];
  a2[284] += 104LL;
  v3 = (__m128i *)((v2 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)&v3[6].m128i_u64[1] && v2 )
    a2[274] = (char *)v3 + 104;
  else
    v3 = (__m128i *)sub_722150((__int64)(a2 + 274), 104, 3);
  sub_749220(
    v3,
    (__int64)a2,
    (const __m128i *)a1,
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 48),
    *(_QWORD **)(a1 + 64),
    *(_DWORD *)(a1 + 56),
    *(_QWORD **)(a1 + 80),
    *(_DWORD *)(a1 + 72),
    *(_QWORD *)(a1 + 96),
    *(_DWORD *)(a1 + 88));
  v4 = *(_BYTE *)(a1 + 34) & 1 | v3[2].m128i_i8[2] & 0xFE;
  v3[2].m128i_i8[2] = v4;
  v5 = *(_BYTE *)(a1 + 34) & 2 | v4 & 0xFD;
  v3[2].m128i_i8[2] = v5;
  v3[2].m128i_i8[2] = *(_BYTE *)(a1 + 34) & 4 | v5 & 0xFB;
  return v3;
}


__int64 __fastcall sub_739950(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  char v4; // al
  char v5; // al

  v2 = a2[274];
  a2[284] += 80LL;
  v3 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= (unsigned __int64)(v3 + 80) && v2 )
    a2[274] = v3 + 80;
  else
    v3 = sub_722150((__int64)(a2 + 274), 80, 3);
  sub_739800(
    v3,
    a2,
    (const __m128i *)a1,
    *(const void **)(a1 + 40),
    *(unsigned int *)(a1 + 36),
    *(_BYTE *)(a1 + 64),
    *(const void **)(a1 + 56),
    *(unsigned int *)(a1 + 48),
    *(const void **)(a1 + 72),
    *(unsigned int *)(a1 + 68));
  v4 = *(_BYTE *)(a1 + 34) & 1 | *(_BYTE *)(v3 + 34) & 0xFE;
  *(_BYTE *)(v3 + 34) = v4;
  v5 = *(_BYTE *)(a1 + 34) & 2 | v4 & 0xFD;
  *(_BYTE *)(v3 + 34) = v5;
  *(_BYTE *)(v3 + 34) = *(_BYTE *)(a1 + 34) & 4 | v5 & 0xFB;
  return v3;
}


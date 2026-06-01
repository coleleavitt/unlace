__int64 __fastcall sub_737910(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  char v4; // al
  char v5; // al

  v2 = a2[274];
  a2[284] += 96LL;
  v3 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= (unsigned __int64)(v3 + 96) && v2 )
    a2[274] = v3 + 96;
  else
    v3 = sub_722150((__int64)(a2 + 274), 96, 3);
  sub_737700(
    v3,
    a2,
    (const __m128i *)a1,
    *(_QWORD *)(a1 + 40),
    *(const void **)(a1 + 56),
    *(unsigned int *)(a1 + 48),
    *(_DWORD *)(a1 + 64),
    *(void **)(a1 + 72),
    *(unsigned int *)(a1 + 68),
    *(_BYTE *)(a1 + 80),
    *(_QWORD *)(a1 + 88));
  v4 = *(_BYTE *)(a1 + 34) & 1 | *(_BYTE *)(v3 + 34) & 0xFE;
  *(_BYTE *)(v3 + 34) = v4;
  v5 = *(_BYTE *)(a1 + 34) & 2 | v4 & 0xFD;
  *(_BYTE *)(v3 + 34) = v5;
  *(_BYTE *)(v3 + 34) = *(_BYTE *)(a1 + 34) & 4 | v5 & 0xFB;
  return v3;
}


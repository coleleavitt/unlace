__int64 __fastcall sub_73CC50(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // al
  char v9; // al

  v6 = a2[274];
  a2[284] += 80LL;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= (unsigned __int64)(v7 + 80) && v6 )
    a2[274] = v7 + 80;
  else
    v7 = sub_722150((__int64)(a2 + 274), 80, 3);
  sub_73CA30(
    v7,
    a2,
    (const __m128i *)a1,
    *(const void **)(a1 + 40),
    *(unsigned int *)(a1 + 36),
    a6,
    *(void **)(a1 + 56),
    *(unsigned int *)(a1 + 48));
  v8 = *(_BYTE *)(a1 + 34) & 1 | *(_BYTE *)(v7 + 34) & 0xFE;
  *(_BYTE *)(v7 + 34) = v8;
  v9 = *(_BYTE *)(a1 + 34) & 2 | v8 & 0xFD;
  *(_BYTE *)(v7 + 34) = v9;
  *(_BYTE *)(v7 + 34) = *(_BYTE *)(a1 + 34) & 4 | v9 & 0xFB;
  return v7;
}


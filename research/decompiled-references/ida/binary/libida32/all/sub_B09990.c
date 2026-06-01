__int64 __fastcall sub_B09990(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  const void *v4; // r14
  __int64 v5; // r12
  char v6; // dl
  char v7; // dl

  v3 = *(unsigned int *)(a1 + 40);
  v4 = *(const void **)(a1 + 48);
  v5 = sub_99FDF0((__int64 *)(a2 + 2352), 88, 3u);
  sub_B098B0(v5, a2, (const __m128i *)a1, v4, v3, *(const void **)(a1 + 64), *(_DWORD *)(a1 + 56));
  v6 = *(_BYTE *)(a1 + 38) & 1 | *(_BYTE *)(v5 + 38) & 0xFE;
  *(_BYTE *)(v5 + 38) = v6;
  v7 = *(_BYTE *)(a1 + 38) & 2 | v6 & 0xFD;
  *(_BYTE *)(v5 + 38) = v7;
  *(_BYTE *)(v5 + 38) = *(_BYTE *)(a1 + 38) & 4 | v7 & 0xFB;
  sub_B09360((unsigned int *)(v5 + 72), (_QWORD *)(v5 + 80), a2, *(const void **)(a1 + 80), *(_DWORD *)(a1 + 72));
  return v5;
}


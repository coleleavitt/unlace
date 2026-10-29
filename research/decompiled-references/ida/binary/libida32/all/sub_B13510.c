__int64 __fastcall sub_B13510(__int64 a1, const void *a2, unsigned int a3, __int64 a4, int a5)
{
  char v7; // r12
  char v8; // bp
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  size_t v12; // rdx
  char v13; // al

  if ( a5 == 1 )
  {
    v7 = 1;
    v8 = 2;
  }
  else
  {
    v7 = a5 == 0 ? 0 : 2;
    v8 = a5 == 0 ? 1 : 3;
  }
  v9 = sub_99FDF0((__int64 *)(a1 + 2352), 56, 3u);
  *(_OWORD *)v9 = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = a4;
  *(_BYTE *)(v9 + 35) &= 0xFCu;
  *(_BYTE *)(v9 + 38) &= 0xE0u;
  *(_WORD *)(v9 + 36) = 171;
  *(_WORD *)(v9 + 32) = 418;
  *(_BYTE *)(v9 + 34) = (16 * v7) | v8 & 0xF;
  *(_DWORD *)(v9 + 40) = a3;
  v10 = (void *)sub_99FDF0((__int64 *)(a1 + 2352), 4LL * a3, 4u);
  v11 = *(unsigned int *)(v9 + 40);
  *(_QWORD *)(v9 + 48) = v10;
  v12 = 4 * v11;
  if ( v12 )
    memmove(v10, a2, v12);
  v13 = *(_BYTE *)(v9 + 34);
  *(_BYTE *)(v9 + 38) |= 4u;
  if ( (v13 & 0xF0) == 0xF0 && !*(_QWORD *)v9 )
    *(_BYTE *)(v9 + 34) = v13 & 0xF;
  return v9;
}


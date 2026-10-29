__int64 __fastcall sub_B13FB0(__int64 a1, const void *a2, unsigned int a3, __int64 a4, int a5)
{
  int v7; // ebp
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // rdx
  size_t v13; // rdx
  char v14; // al

  v7 = -(a5 == 0);
  v8 = 16 * (a5 != 0);
  v9 = sub_99FDF0((__int64 *)(a1 + 2352), 88, 3u);
  *(_BYTE *)(v9 + 35) &= 0xFCu;
  v10 = v9;
  *(_BYTE *)(v9 + 38) &= 0xE0u;
  *(_WORD *)(v9 + 32) = 418;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = a4;
  *(_BYTE *)(v9 + 34) = v8 | (v7 + 2) & 0xF;
  *(_WORD *)(v9 + 36) = 68;
  *(_DWORD *)(v9 + 40) = a3;
  *(_OWORD *)v9 = 0;
  v11 = (void *)sub_99FDF0((__int64 *)(a1 + 2352), 4LL * a3, 4u);
  v12 = *(unsigned int *)(v10 + 40);
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 48) = v11;
  v13 = 4 * v12;
  *(_QWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  if ( v13 )
    memmove(v11, a2, v13);
  v14 = *(_BYTE *)(v10 + 34);
  *(_BYTE *)(v10 + 38) |= 4u;
  if ( (v14 & 0xF0) == 0xF0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 34) = v14 & 0xF;
  return v10;
}


unsigned __int64 __fastcall sub_73FA60(_QWORD *a1, _DWORD *a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rdx
  size_t v16; // rdx
  char v17; // al

  if ( a5 )
  {
    v7 = 1;
    v8 = 2;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  v9 = sub_7222F0((__int64)(a1 + 274), 80, 3);
  *(_OWORD *)v9 = 0;
  v10 = v9;
  v11 = a3;
  *(_QWORD *)(v9 + 16) = a4;
  *(_BYTE *)(v9 + 34) &= 0xE0u;
  v12 = *(_QWORD *)(v9 + 24) & 0xFC00000000000000LL;
  *(_DWORD *)(v10 + 36) = a3;
  *(_QWORD *)(v10 + 24) = v12 | (v7 << 52) | (v8 << 48) | 0x19C00000000LL;
  *(_WORD *)(v10 + 32) = 64;
  v13 = a1[274];
  a1[284] += v11 * 4;
  v14 = (_DWORD *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a1[275] >= (unsigned __int64)&v14[v11] && v13 )
    a1[274] = &v14[v11];
  else
    v14 = (_DWORD *)sub_722150((__int64)(a1 + 274), v11 * 4, 4);
  v15 = *(unsigned int *)(v10 + 36);
  *(_QWORD *)(v10 + 40) = v14;
  *(_QWORD *)(v10 + 48) = 0;
  v16 = 4 * v15;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 72) = 0;
  if ( v16 <= 4 )
  {
    if ( v16 == 4 )
      *v14 = *a2;
  }
  else
  {
    memmove(v14, a2, v16);
  }
  v17 = *(_BYTE *)(v10 + 30);
  *(_BYTE *)(v10 + 34) |= 4u;
  if ( (~v17 & 0xF0) == 0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 30) = v17 & 0xF;
  return v10;
}


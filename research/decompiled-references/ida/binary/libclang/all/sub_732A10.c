unsigned __int64 __fastcall sub_732A10(_QWORD *a1, _DWORD *a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v7; // r15
  unsigned __int8 v8; // bp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  size_t v15; // rdx
  char v16; // al

  if ( a5 == 1 )
  {
    v7 = 1;
    v8 = 2;
  }
  else if ( a5 == 2 )
  {
    v7 = 2;
    v8 = 3;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  v9 = sub_7222F0((__int64)(a1 + 274), 48, 3);
  *(_OWORD *)v9 = 0;
  v10 = v9;
  v11 = a3;
  *(_QWORD *)(v9 + 16) = a4;
  *(_BYTE *)(v9 + 34) &= 0xE0u;
  *(_DWORD *)(v9 + 36) = a3;
  *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xFC00000000000000LL
                       | (v7 << 52)
                       | ((unsigned __int64)v8 << 48)
                       | 0x19C00000000LL;
  *(_WORD *)(v9 + 32) = 165;
  v12 = a1[274];
  a1[284] += v11 * 4;
  v13 = (_DWORD *)((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a1[275] >= (unsigned __int64)&v13[v11] && v12 )
    a1[274] = &v13[v11];
  else
    v13 = (_DWORD *)sub_722150((__int64)(a1 + 274), v11 * 4, 4);
  v14 = *(unsigned int *)(v10 + 36);
  *(_QWORD *)(v10 + 40) = v13;
  v15 = 4 * v14;
  if ( v15 <= 4 )
  {
    if ( v15 == 4 )
      *v13 = *a2;
  }
  else
  {
    memmove(v13, a2, v15);
  }
  v16 = *(_BYTE *)(v10 + 30);
  *(_BYTE *)(v10 + 34) |= 4u;
  if ( (~v16 & 0xF0) == 0 && !*(_QWORD *)v10 )
    *(_BYTE *)(v10 + 30) = v16 & 0xF;
  return v10;
}


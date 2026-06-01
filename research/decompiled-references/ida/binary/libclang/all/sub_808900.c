__int64 __fastcall sub_808900(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  const void *v13; // r13
  char *v14; // rdi

  v7 = sub_AC40C0(32, a1, 8);
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x35;
  if ( byte_4AD234C )
    sub_AC4570(53);
  *(_DWORD *)(v7 + 24) = 0;
  *(_WORD *)(v7 + 1) &= 0xF801u;
  *(_QWORD *)(v7 + 8) = a3;
  *(_QWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 28) = a4;
  v8 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(v7 + 24) = v8;
  v9 = v8;
  v10 = (unsigned __int64)(v8 + 63) >> 6;
  if ( v9 <= 0x40 )
  {
    if ( v10 == 1 )
      *(_QWORD *)(v7 + 16) = *(_QWORD *)a2;
  }
  else
  {
    v11 = a1[274];
    v12 = 8 * v10;
    v13 = *(const void **)a2;
    a1[284] += v12;
    v14 = (char *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[275] >= (unsigned __int64)&v14[v12] && v11 )
      a1[274] = &v14[v12];
    else
      v14 = (char *)sub_804090((__int64)(a1 + 274), v12, 3);
    *(_QWORD *)(v7 + 16) = v14;
    memmove(v14, v13, v12);
  }
  *(_BYTE *)(v7 + 1) &= 0x3Fu;
  *(_BYTE *)(v7 + 2) &= 0xF8u;
  return v7;
}


__int64 __fastcall sub_808A80(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned int v11; // eax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbp
  const void *v15; // r13
  char *v16; // rdi

  v9 = sub_AC40C0(40, a1, 8);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x40;
  if ( byte_4AD234C )
    sub_AC4570(64);
  *(_DWORD *)(v9 + 24) = 0;
  *(_WORD *)(v9 + 1) &= 0xF801u;
  *(_QWORD *)(v9 + 8) = a3;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 28) = a4;
  *(_DWORD *)(v9 + 32) = a5;
  v10 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(v9 + 24) = v10;
  v11 = v10;
  v12 = (unsigned __int64)(v10 + 63) >> 6;
  if ( v11 <= 0x40 )
  {
    if ( v12 == 1 )
      *(_QWORD *)(v9 + 16) = *(_QWORD *)a2;
  }
  else
  {
    v13 = a1[274];
    v14 = 8 * v12;
    v15 = *(const void **)a2;
    a1[284] += v14;
    v16 = (char *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[275] >= (unsigned __int64)&v16[v14] && v13 )
      a1[274] = &v16[v14];
    else
      v16 = (char *)sub_804090((__int64)(a1 + 274), v14, 3);
    *(_QWORD *)(v9 + 16) = v16;
    memmove(v16, v15, v14);
  }
  *(_BYTE *)(v9 + 1) &= 0x3Fu;
  *(_BYTE *)(v9 + 2) &= 0xF8u;
  return v9;
}


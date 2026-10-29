__int64 __fastcall sub_809240(_QWORD *a1, __int64 *a2, __int16 a3, __int64 a4, int a5)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned int v13; // eax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r12
  void *v17; // r13
  char *v18; // rdi
  void *src; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-40h]

  v9 = sub_AC40C0(32, a1, 8);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x3F;
  if ( byte_4AD234C )
    sub_AC4570(63);
  *(_WORD *)(v9 + 1) &= 0xF801u;
  *(_QWORD *)(v9 + 8) = a4;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  v10 = *a2;
  *(_DWORD *)(v9 + 28) = a5;
  *(_WORD *)(v9 + 2) = *(_WORD *)(v9 + 2) & 0xFE07 | ((a3 << 8) | (8 * (sub_2575A90(v10) & 0x1F))) & 0x1F8;
  v11 = *a2;
  if ( v11 == sub_2575D20() )
    sub_25807A0(&src, a2);
  else
    sub_2580530(&src, a2);
  v12 = v21;
  *(_DWORD *)(v9 + 24) = v21;
  v13 = v12;
  v14 = (unsigned __int64)(v12 + 63) >> 6;
  if ( v13 <= 0x40 )
  {
    if ( v14 == 1 )
      *(_QWORD *)(v9 + 16) = src;
    else
      *(_QWORD *)(v9 + 16) = 0;
  }
  else
  {
    v15 = a1[274];
    v16 = 8 * v14;
    v17 = src;
    a1[284] += v16;
    v18 = (char *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[275] >= (unsigned __int64)&v18[v16] && v15 )
      a1[274] = &v18[v16];
    else
      v18 = (char *)sub_804090((__int64)(a1 + 274), v16, 3);
    *(_QWORD *)(v9 + 16) = v18;
    memmove(v18, v17, v16);
    if ( v21 > 0x40 && src )
      operator delete[](src);
  }
  *(_BYTE *)(v9 + 1) &= 0x3Fu;
  *(_BYTE *)(v9 + 2) &= 0xF8u;
  return v9;
}


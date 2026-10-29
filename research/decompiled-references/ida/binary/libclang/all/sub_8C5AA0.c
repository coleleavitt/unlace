__int64 __fastcall sub_8C5AA0(_QWORD *a1, __int64 a2, unsigned __int8 a3, const void *a4, __int64 a5)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int8 v13; // r13
  unsigned __int8 v14; // al
  unsigned __int8 v15; // r13
  unsigned __int8 v17; // [rsp+7h] [rbp-41h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v6 = 8 * a5 + 24;
  v7 = a5;
  v10 = a1[274];
  a1[284] += v6;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= (unsigned __int64)(v6 + v11) && v10 )
    a1[274] = v6 + v11;
  else
    v11 = sub_8C1090((__int64)(a1 + 274), v6, 3);
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_BYTE *)(a2 + 1);
  v14 = (v13 >> 1) & 3;
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x3D;
  v15 = (v13 >> 3) & 7;
  if ( byte_4AD234C )
  {
    v18 = v12;
    v17 = v14;
    sub_AC4570(61);
    v12 = v18;
    v14 = v17;
  }
  *(_QWORD *)(v11 + 8) = v12;
  *(_QWORD *)(v11 + 16) = a2;
  *(_WORD *)(v11 + 1) = *(_WORD *)(v11 + 1) & 0xF801 | (2 * v14) | (8 * v15);
  *(_DWORD *)v11 = *(_DWORD *)v11 & 0x3FFF | (v7 << 20) | (a3 << 19) | ((sub_76AC80(v11) & 0x1F) << 14);
  if ( v7 )
    memmove((void *)(v11 + 24), a4, 8LL * v7);
  return v11;
}


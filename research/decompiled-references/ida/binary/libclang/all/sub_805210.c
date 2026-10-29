__int64 __fastcall sub_805210(_QWORD *a1, __int64 a2, int a3, __int16 a4)
{
  __int64 v4; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int8 v12; // bp
  unsigned __int8 v13; // r13
  unsigned __int8 v14; // bp
  __int16 v15; // ax
  int v16; // edx
  __int16 v17; // ax
  __int64 v19; // [rsp+8h] [rbp-40h]

  v4 = 56;
  if ( a3 != 2 )
    v4 = 0;
  v8 = v4 + 8LL * (a3 == 1) + 24;
  v9 = a1[274];
  a1[284] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= (unsigned __int64)(v8 + v10) && v9 )
    a1[274] = v8 + v10;
  else
    v10 = sub_804090((__int64)(a1 + 274), v8, 3);
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_BYTE *)(a2 + 1);
  v13 = (v12 >> 1) & 3;
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x3E;
  v14 = (v12 >> 3) & 7;
  if ( byte_4AD234C )
  {
    v19 = v11;
    sub_AC4570(62);
    v11 = v19;
  }
  v15 = *(_WORD *)(v10 + 1);
  *(_QWORD *)(v10 + 8) = v11;
  *(_QWORD *)(v10 + 16) = a2;
  *(_WORD *)(v10 + 1) = v15 & 0xF801 | (2 * v13) | (8 * v14);
  v16 = *(_DWORD *)v10 & 0xFC003FFF | ((sub_76AC80(v10) & 0x1F) << 14) | (a3 << 19) & 0x180000;
  v17 = *(_WORD *)(v10 + 4);
  *(_DWORD *)v10 = v16;
  *(_WORD *)(v10 + 4) = v17 & 0xFE00 | (a4 << 8) & 0x1FF;
  if ( a3 == 2 )
  {
    *(_BYTE *)(v10 + 28) &= ~1u;
    *(_DWORD *)(v10 + 24) = 0;
  }
  return v10;
}


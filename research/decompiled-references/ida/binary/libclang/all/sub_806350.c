unsigned __int64 __fastcall sub_806350(_QWORD *a1, int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // r10
  bool v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int8 v18; // al
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]

  v6 = a3;
  v11 = a6 != 0;
  v12 = 8LL * (a6 != 0) + 16;
  v13 = a1[274];
  a1[284] += v12;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v12 + v14 && v13 )
  {
    a1[274] = v12 + v14;
  }
  else
  {
    v20 = sub_804090((__int64)(a1 + 274), v12, 3);
    v6 = a3;
    v14 = v20;
  }
  *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x13;
  if ( byte_4AD234C )
  {
    v21 = v6;
    sub_AC4570(19);
    v6 = v21;
  }
  v15 = *(_DWORD *)v14;
  *(_QWORD *)(v14 + 8) = v6;
  v16 = (a4 << 19) & 0x780000;
  v17 = v15 & 0xFE0001FF;
  *(_DWORD *)(v14 + 4) = a2;
  BYTE1(v16) = 2;
  *(_DWORD *)v14 = v17 | ((a5 << 24) | (v11 << 23) | v16) & 0x1FFFE00;
  if ( a6 )
    *(_QWORD *)(v14 + 16) = a6;
  v18 = sub_76C340(v14, v12, v17, a4);
  *(_BYTE *)(v14 + 1) = (v18 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
  *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v18 >> 2) & 7;
  return v14;
}


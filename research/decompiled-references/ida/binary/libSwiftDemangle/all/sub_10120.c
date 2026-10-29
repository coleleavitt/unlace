unsigned __int64 __fastcall sub_10120(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  _QWORD *v21; // rax
  __int64 v22; // rdx

  v3 = a2;
  v4 = a3;
  if ( (a3 | a2) < 0 )
    return 0;
  v5 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v5;
  if ( !v5 || (v6 = v5 + 24, v5 + 24 > a1[2]) )
  {
    v7 = 2LL * a1[4];
    if ( v7 < 0x20 )
      v7 = 32;
    a1[4] = v7;
    v8 = v7 + 8;
    v9 = malloc(v7 + 8);
    v10 = a1[3];
    a1[3] = v9;
    *v9 = v10;
    v5 = ((unsigned __int64)v9 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v9 + v8;
    v6 = v5 + 24;
  }
  a1[1] = v6;
  *(_WORD *)(v5 + 16) = 35;
  *(_BYTE *)(v5 + 18) = 0;
  v11 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v11;
  if ( !v11 || (v12 = v11 + 24, v11 + 24 > a1[2]) )
  {
    v13 = 2LL * a1[4];
    if ( v13 < 0x20 )
      v13 = 32;
    a1[4] = v13;
    v14 = v13 + 8;
    v15 = malloc(v13 + 8);
    v16 = a1[3];
    a1[3] = v15;
    *v15 = v16;
    v11 = ((unsigned __int64)v15 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v15 + v14;
    v12 = v11 + 24;
  }
  a1[1] = v12;
  *(_WORD *)(v11 + 16) = 99;
  *(_BYTE *)(v11 + 18) = 2;
  *(_QWORD *)v11 = v3;
  sub_C080(v5, v11, a1);
  v17 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v17;
  if ( !v17 || (v18 = v17 + 24, v17 + 24 > a1[2]) )
  {
    v19 = 2LL * a1[4];
    if ( v19 < 0x20 )
      v19 = 32;
    a1[4] = v19;
    v20 = v19 + 8;
    v21 = malloc(v19 + 8);
    v22 = a1[3];
    a1[3] = v21;
    *v21 = v22;
    v17 = ((unsigned __int64)v21 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v21 + v20;
    v18 = v17 + 24;
  }
  a1[1] = v18;
  *(_WORD *)(v17 + 16) = 99;
  *(_QWORD *)v17 = v4;
  *(_BYTE *)(v17 + 18) = 2;
  sub_C080(v5, v17, a1);
  return v5;
}


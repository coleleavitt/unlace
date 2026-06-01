unsigned __int64 __fastcall sub_151B0(_QWORD *a1, __int16 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v5; // rsi
  char v7; // di
  char v8; // dl
  unsigned __int64 v9; // rax
  char v10; // bp
  int v11; // r14d
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  char v27; // [rsp+Fh] [rbp-39h]

  v2 = a1[9];
  v3 = a1[8];
  if ( v2 >= v3 )
    return 0;
  v5 = a1[7];
  v7 = *(_BYTE *)(v5 + v2);
  if ( v7 == 109 )
  {
    a1[9] = ++v2;
    if ( v3 <= v2 )
      return 0;
    v8 = 1;
    if ( *(_BYTE *)(v5 + v2) == 113 )
    {
LABEL_5:
      v9 = v2 + 1;
      a1[9] = v9;
      if ( v9 < v3 )
      {
        v10 = 1;
        goto LABEL_7;
      }
      return 0;
    }
  }
  else
  {
    v8 = 0;
    if ( v7 == 113 )
      goto LABEL_5;
  }
  v9 = a1[9];
  v10 = 0;
LABEL_7:
  a1[9] = v9 + 1;
  v11 = *(char *)(v5 + v9) - 48;
  if ( (unsigned int)v11 > 9 )
    return 0;
  v12 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v12;
  if ( !v12 || (v13 = v12 + 24, v12 + 24 > a1[2]) )
  {
    v27 = v8;
    v14 = 2LL * a1[4];
    if ( v14 < 0x20 )
      v14 = 32;
    a1[4] = v14;
    v15 = v14 + 8;
    v16 = malloc(v14 + 8);
    v17 = a1[3];
    v8 = v27;
    a1[3] = v16;
    *v16 = v17;
    v12 = ((unsigned __int64)v16 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v16 + v15;
    v13 = v12 + 24;
  }
  a1[1] = v13;
  *(_WORD *)(v12 + 16) = a2;
  *(_BYTE *)(v12 + 18) = 0;
  if ( v8 )
  {
    v26 = sub_12C70(a1, 1);
    *(_WORD *)(v26 + 16) = 327;
    *(_BYTE *)(v26 + 18) = 0;
    sub_C080(v12, v26, a1);
  }
  if ( v10 )
  {
    v25 = sub_12C70(a1, 1);
    *(_WORD *)(v25 + 16) = 206;
    *(_BYTE *)(v25 + 18) = 0;
    sub_C080(v12, v25, a1);
  }
  v18 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  a1[1] = v18;
  if ( !v18 || (v19 = v18 + 24, v18 + 24 > a1[2]) )
  {
    v20 = 2LL * a1[4];
    if ( v20 < 0x20 )
      v20 = 32;
    a1[4] = v20;
    v21 = v20 + 8;
    v22 = malloc(v20 + 8);
    v23 = a1[3];
    a1[3] = v22;
    *v22 = v23;
    v18 = ((unsigned __int64)v22 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    a1[2] = (char *)v22 + v21;
    v19 = v18 + 24;
  }
  a1[1] = v19;
  *(_WORD *)(v18 + 16) = 205;
  *(_BYTE *)(v18 + 18) = 2;
  *(_QWORD *)v18 = v11;
  sub_C080(v12, v18, a1);
  return v12;
}


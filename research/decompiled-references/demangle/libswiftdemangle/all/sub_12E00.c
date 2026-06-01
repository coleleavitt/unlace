unsigned __int64 __fastcall sub_12E00(_QWORD *a1, __int64 a2, __int16 a3)
{
  char v3; // al
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // al
  __int64 *v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // r15
  __int64 v23; // rbx
  unsigned __int64 v24; // rax

  if ( !a2 )
    return 0;
  v3 = *(_BYTE *)(a2 + 18);
  if ( v3 == 1 )
  {
    v22 = *(__int64 **)a2;
    v23 = *(_QWORD *)(a2 + 8);
    v24 = sub_12C70(a1, 1);
    *(_WORD *)(v24 + 16) = a3;
    v5 = v24;
    *(_BYTE *)(v24 + 18) = 1;
    *(_QWORD *)v24 = v22;
    *(_QWORD *)(v24 + 8) = v23;
  }
  else
  {
    v5 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v3 == 2 )
    {
      v9 = *(__int64 **)a2;
      a1[1] = v5;
      if ( !v5 || (v10 = v5 + 24, v5 + 24 > a1[2]) )
      {
        v11 = 2LL * a1[4];
        if ( v11 < 0x20 )
          v11 = 32;
        a1[4] = v11;
        v12 = v11 + 8;
        v13 = malloc(v11 + 8);
        v14 = a1[3];
        a1[3] = v13;
        *v13 = v14;
        v5 = ((unsigned __int64)v13 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        a1[2] = (char *)v13 + v12;
        v10 = v5 + 24;
      }
      a1[1] = v10;
      *(_WORD *)(v5 + 16) = a3;
      *(_BYTE *)(v5 + 18) = 2;
      *(_QWORD *)v5 = v9;
      v7 = *(_BYTE *)(a2 + 18);
      if ( v7 <= 4u )
        goto LABEL_8;
LABEL_16:
      if ( v7 != 5 )
        return v5;
      v15 = *(__int64 **)a2;
      v16 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
      goto LABEL_18;
    }
    a1[1] = v5;
    if ( !v5 || (v6 = v5 + 24, v5 + 24 > a1[2]) )
    {
      v18 = 2LL * a1[4];
      if ( v18 < 0x20 )
        v18 = 32;
      a1[4] = v18;
      v19 = v18 + 8;
      v20 = malloc(v18 + 8);
      v21 = a1[3];
      a1[3] = v20;
      *v20 = v21;
      v5 = ((unsigned __int64)v20 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      a1[2] = (char *)v20 + v19;
      v6 = v5 + 24;
    }
    a1[1] = v6;
    *(_WORD *)(v5 + 16) = a3;
    *(_BYTE *)(v5 + 18) = 0;
  }
  v7 = *(_BYTE *)(a2 + 18);
  if ( v7 > 4u )
    goto LABEL_16;
LABEL_8:
  if ( v7 <= 2u )
    return v5;
  v15 = (__int64 *)a2;
  v16 = a2 + 8;
  if ( v7 != 3 )
    v16 = a2 + 16;
LABEL_18:
  while ( (__int64 *)v16 != v15 )
  {
    v17 = *v15++;
    sub_C080(v5, v17, a1);
  }
  return v5;
}

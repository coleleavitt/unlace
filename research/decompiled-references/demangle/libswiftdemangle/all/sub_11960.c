unsigned __int64 __fastcall sub_11960(__int64 a1, char a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  char v5; // dl
  char v6; // al
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int16 v11; // dx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r13
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbp
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbp
  _QWORD *v29; // rax
  __int64 v30; // rdx

  v2 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v2;
  if ( !v2 || (v3 = v2 + 24, v2 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v13 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v13 < 0x20 )
      v13 = 32;
    *(_QWORD *)(a1 + 32) = v13;
    v14 = v13 + 8;
    v15 = malloc(v13 + 8);
    v16 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v15;
    *v15 = v16;
    v2 = ((unsigned __int64)v15 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v15 + v14;
    v3 = v2 + 24;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_WORD *)(v2 + 16) = 40;
  *(_BYTE *)(v2 + 18) = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 72);
      if ( v4 >= *(_QWORD *)(a1 + 64) )
        goto LABEL_21;
      v5 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v4);
      if ( v5 == 108 )
      {
        *(_QWORD *)(a1 + 72) = v4 + 1;
        goto LABEL_7;
      }
      if ( v5 == 122 )
      {
        v18 = 0;
        *(_QWORD *)(a1 + 72) = v4 + 1;
      }
      else
      {
LABEL_21:
        v17 = sub_D180((_QWORD *)a1) + 1;
        if ( v17 < 0 )
          return 0;
        v18 = v17;
      }
      v19 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 8) = v19;
      if ( !v19 || (v20 = v19 + 24, v19 + 24 > *(_QWORD *)(a1 + 16)) )
      {
        v21 = 2LL * *(_QWORD *)(a1 + 32);
        if ( v21 < 0x20 )
          v21 = 32;
        *(_QWORD *)(a1 + 32) = v21;
        v22 = v21 + 8;
        v23 = malloc(v21 + 8);
        v24 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v23;
        *v23 = v24;
        v19 = ((unsigned __int64)v23 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(a1 + 16) = (char *)v23 + v22;
        v20 = v19 + 24;
      }
      *(_QWORD *)(a1 + 8) = v20;
      *(_WORD *)(v19 + 16) = 34;
      *(_BYTE *)(v19 + 18) = 2;
      *(_QWORD *)v19 = v18;
      sub_C080(v2, v19, (_QWORD *)a1);
    }
  }
  v25 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v25;
  if ( !v25 || (v26 = v25 + 24, v25 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v27 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v27 < 0x20 )
      v27 = 32;
    *(_QWORD *)(a1 + 32) = v27;
    v28 = v27 + 8;
    v29 = malloc(v27 + 8);
    v30 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v29;
    *v29 = v30;
    v25 = ((unsigned __int64)v29 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v29 + v28;
    v26 = v25 + 24;
  }
  *(_QWORD *)(a1 + 8) = v26;
  *(_WORD *)(v25 + 16) = 34;
  *(_BYTE *)(v25 + 18) = 2;
  *(_QWORD *)v25 = 1;
  sub_C080(v2, v25, (_QWORD *)a1);
LABEL_7:
  v6 = *(_BYTE *)(v2 + 18);
  v7 = 2;
  if ( v6 != 4 )
  {
    if ( v6 == 5 )
      v7 = *(unsigned int *)(v2 + 8);
    else
      v7 = v6 == 3;
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 96);
    if ( !v8 )
      break;
    v9 = (unsigned int)(v8 - 1);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v9);
    v11 = *(_WORD *)(v10 + 16);
    if ( v11 != 33 && (unsigned __int16)(v11 - 36) > 3u )
      break;
    *(_DWORD *)(a1 + 96) = v9;
    if ( !v10 )
      break;
    sub_C080(v2, v10, (_QWORD *)a1);
  }
  sub_C3A0(v2, v7);
  return v2;
}

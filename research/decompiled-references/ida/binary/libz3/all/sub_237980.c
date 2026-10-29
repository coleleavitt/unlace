_QWORD *__fastcall sub_237980(_QWORD *a1, unsigned int a2)
{
  unsigned int *v2; // r13
  __int64 v4; // r14
  __int64 *v5; // rdi
  __int64 v6; // rax
  int v7; // edx
  unsigned int **v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  char v11; // al
  unsigned int v12; // eax
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // edx
  _QWORD *v20; // r14
  unsigned int v21; // eax
  int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  unsigned int *v26; // rsi
  __int64 v27; // rsi
  __int64 v29; // rax
  int v30; // edx
  __int64 *v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = nullptr;
  v4 = a1[31];
  v5 = *(__int64 **)v4;
  if ( (*(_BYTE *)(v4 + 123) & 0x10) == 0 )
    goto LABEL_8;
  v6 = *(_QWORD *)(v4 + 104);
  v7 = 18;
  while ( 1 )
  {
    if ( !--v7 )
    {
      sub_236900(v5 + 84, (__int64 *)(v4 + 104));
      v34 = *(_QWORD *)(v4 + 104);
      v4 = a1[31];
      v5 = *(__int64 **)v4;
      v8 = (unsigned int **)(*(_QWORD *)(v34 + 16) + 8LL * a2);
      goto LABEL_7;
    }
    if ( *(char *)(v6 + 3) >= 0 )
      break;
    if ( *(_BYTE *)(v6 + 3) >> 6 != 2 )
    {
      v8 = (unsigned int **)(*(_QWORD *)(v6 + 16) + 8LL * a2);
      goto LABEL_7;
    }
LABEL_39:
    v6 = *(_QWORD *)(v6 + 16);
  }
  if ( a2 != *(_DWORD *)(v6 + 4) )
    goto LABEL_39;
  v8 = (unsigned int **)(v6 + 8);
LABEL_7:
  v2 = *v8;
LABEL_8:
  v9 = *(_QWORD *)(v4 + 88);
  if ( !v9 )
    goto LABEL_20;
  v10 = *(_QWORD *)(v4 + 88);
  v11 = *(_BYTE *)(v9 + 3) >> 6;
  if ( v11 )
  {
    if ( v11 != 1 )
      goto LABEL_11;
LABEL_44:
    if ( a2 >= *(_DWORD *)(v10 + 4) + 1 )
      goto LABEL_45;
  }
  else
  {
    do
    {
      v10 = *(_QWORD *)(v10 + 16);
      v11 = *(_BYTE *)(v10 + 3) >> 6;
    }
    while ( !v11 );
    if ( v11 == 1 )
      goto LABEL_44;
LABEL_11:
    if ( v11 == 2 )
      v12 = *(_DWORD *)(v10 + 4) - 1;
    else
      v12 = *(_DWORD *)(v10 + 4);
    if ( a2 >= v12 )
    {
LABEL_45:
      v9 = 0;
      if ( (*(_BYTE *)(v4 + 123) & 0x20) != 0 )
        goto LABEL_21;
      goto LABEL_46;
    }
  }
  v13 = 18;
  while ( 2 )
  {
    if ( !--v13 )
    {
      sub_233F80(v5 + 77, (_DWORD *)(v4 + 88));
      v35 = *(_QWORD *)(v4 + 88);
      v4 = a1[31];
      v5 = *(__int64 **)v4;
      v14 = (__int64 *)(*(_QWORD *)(v35 + 16) + 8LL * a2);
      goto LABEL_19;
    }
    if ( *(char *)(v9 + 3) < 0 )
    {
      if ( *(_BYTE *)(v9 + 3) >> 6 != 2 )
      {
        v14 = (__int64 *)(*(_QWORD *)(v9 + 16) + 8LL * a2);
        goto LABEL_19;
      }
      goto LABEL_37;
    }
    if ( a2 != *(_DWORD *)(v9 + 4) )
    {
LABEL_37:
      v9 = *(_QWORD *)(v9 + 16);
      continue;
    }
    break;
  }
  v14 = (__int64 *)(v9 + 8);
LABEL_19:
  v9 = *v14;
LABEL_20:
  if ( (*(_BYTE *)(v4 + 123) & 0x20) != 0 )
  {
LABEL_21:
    v15 = v5[108];
    goto LABEL_22;
  }
LABEL_46:
  v29 = *(_QWORD *)(v4 + 72);
  v30 = 18;
  while ( --v30 )
  {
    if ( *(char *)(v29 + 3) >= 0 )
    {
      if ( a2 == *(_DWORD *)(v29 + 4) )
      {
        v31 = (__int64 *)(v29 + 8);
        goto LABEL_51;
      }
    }
    else if ( *(_BYTE *)(v29 + 3) >> 6 != 2 )
    {
      v31 = (__int64 *)(*(_QWORD *)(v29 + 16) + 8LL * a2);
      goto LABEL_51;
    }
    v29 = *(_QWORD *)(v29 + 16);
  }
  sub_233F80(v5 + 77, (_DWORD *)(v4 + 72));
  v31 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v4 + 72) + 16LL) + 8LL * a2);
LABEL_51:
  v15 = *v31;
LABEL_22:
  v16 = a1[22];
  v36[1] = v15;
  v36[2] = v9;
  v36[0] = v16;
  v36[3] = (__int64)v2;
  if ( !v15 )
  {
    if ( v2 )
    {
      v32 = *v2 & 0x3FFFFFFF;
      if ( !v9 )
      {
        v20 = a1 + 32;
        v33 = (v32 + 2) & 0x3FFFFFFF;
        goto LABEL_59;
      }
      v20 = a1 + 32;
      v22 = *(_DWORD *)(v9 + 8) + 1;
      *v2 = (v32 + 2) & 0x3FFFFFFF | *v2 & 0xC0000000;
    }
    else
    {
      v20 = a1 + 32;
      if ( !v9 )
        goto LABEL_27;
      v22 = *(_DWORD *)(v9 + 8) + 1;
    }
LABEL_26:
    *(_DWORD *)(v9 + 8) = v22 + 1;
    goto LABEL_27;
  }
  v17 = *(_DWORD *)(v15 + 8);
  *(_DWORD *)(v15 + 8) = v17 + 1;
  if ( !v2 )
  {
    if ( !v9 )
    {
      v20 = a1 + 32;
      *(_DWORD *)(v15 + 8) = v17 + 2;
      goto LABEL_27;
    }
    ++*(_DWORD *)(v9 + 8);
    v20 = a1 + 32;
    ++*(_DWORD *)(v15 + 8);
    v22 = *(_DWORD *)(v9 + 8);
    goto LABEL_26;
  }
  v18 = *v2 & 0x3FFFFFFF;
  *v2 = (v18 + 1) & 0x3FFFFFFF | *v2 & 0xC0000000;
  if ( v9 )
  {
    v19 = *v2;
    ++*(_DWORD *)(v9 + 8);
    v20 = a1 + 32;
    ++*(_DWORD *)(v15 + 8);
    v21 = v19 & 0xC0000000 | (v18 + 2) & 0x3FFFFFFF;
    v22 = *(_DWORD *)(v9 + 8);
    *v2 = v21;
    goto LABEL_26;
  }
  v20 = a1 + 32;
  *(_DWORD *)(v15 + 8) = v17 + 2;
  v33 = (v18 + 2) & 0x3FFFFFFF;
LABEL_59:
  *v2 = *v2 & 0xC0000000 | v33 & 0x3FFFFFFF;
LABEL_27:
  v23 = a1[33];
  v24 = a1[32];
  if ( v23 )
  {
    v25 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v24, v23);
      v24 = a1[32];
    }
  }
  v26 = (unsigned int *)a1[35];
  if ( v26 )
  {
    sub_234C20((__int64 *)(v24 + 648), v26);
    v24 = a1[32];
  }
  v27 = a1[34];
  if ( v27 )
  {
    v25 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v24, v27);
  }
  a1[33] = v15;
  a1[35] = v2;
  a1[34] = v9;
  sub_234F80(v36);
  return v20;
}


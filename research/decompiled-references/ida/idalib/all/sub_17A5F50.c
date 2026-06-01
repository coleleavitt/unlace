void __fastcall sub_17A5F50(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r13d
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // r12d
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rax
  __int64 *v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // rax
  __int64 **v39; // rax
  char v40; // [rsp+1h] [rbp-2Dh] BYREF
  _DWORD v41[11]; // [rsp+2h] [rbp-2Ch] BYREF

  if ( *(char *)(a2 + 28) < 0 )
    return;
  if ( (*(_DWORD *)(a2 + 40) & 7) != 6 )
    return;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) != 1 )
    return;
  v41[0] = 0;
  v40 = 0;
  if ( sub_B74C70(a2) )
    return;
  v3 = v41;
  if ( !sub_B760E0(a2, v41, &v40) )
    return;
  v8 = *(_BYTE *)(a2 + 29) & 1;
  if ( v40 )
    goto LABEL_12;
  if ( !v8 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 232) + 817LL) )
      goto LABEL_13;
LABEL_10:
    v3 = (_DWORD *)sub_B32EC0(
                     *(_QWORD *)(a1 + 248),
                     ((unsigned __int64)*(unsigned int *)(a2 + 24) << 32) | *(unsigned int *)(a2 + 24),
                     0);
    sub_B8CC60(a2, (__int64)v3, v9, v10, v11, v12);
    goto LABEL_11;
  }
  v31 = sub_B8C3D0(a2, (__int64)v41, v4, v5, v6, v7);
  v4 = *v31;
  v5 = *v31 + 8LL * *((unsigned int *)v31 + 2);
  if ( *v31 >= v5 )
  {
    if ( v4 != v5 )
    {
      while ( *(_WORD *)(*(_QWORD *)v5 + 36LL) != 351 )
      {
        v5 += 8LL;
        if ( v4 == v5 )
          goto LABEL_26;
      }
      goto LABEL_11;
    }
  }
  else
  {
    v32 = (__int64 *)*v31;
    while ( 1 )
    {
      v4 = *v32;
      if ( *(_WORD *)(*v32 + 36) == 351 )
        break;
      if ( (__int64 *)v5 == ++v32 )
        goto LABEL_26;
    }
    if ( (__int64 *)v5 != v32 )
      goto LABEL_11;
  }
LABEL_26:
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 232) + 817LL) )
    goto LABEL_10;
LABEL_11:
  v8 = *(_BYTE *)(a2 + 29) & 1;
LABEL_12:
  if ( !v8 )
    goto LABEL_13;
  v37 = sub_B8C3D0(a2, (__int64)v3, v4, v5, v6, v7);
  v19 = *v37;
  v20 = (__int64 *)(*v37 + 8LL * *((unsigned int *)v37 + 2));
  if ( *v37 >= (unsigned __int64)v20 )
  {
    if ( (__int64 *)v19 != v20 )
    {
      if ( *(_WORD *)(*v20 + 36) == 128 )
        goto LABEL_16;
      v39 = (__int64 **)(v20 + 1);
      while ( (__int64 **)v19 != v39 )
      {
        v20 = *v39++;
        if ( *((_WORD *)v20 + 18) == 128 )
          goto LABEL_16;
      }
    }
    goto LABEL_13;
  }
  v38 = (__int64 *)*v37;
  while ( 1 )
  {
    v19 = *v38;
    if ( *(_WORD *)(*v38 + 36) == 128 )
      break;
    if ( v20 == ++v38 )
      goto LABEL_13;
  }
  if ( v20 == v38 )
  {
LABEL_13:
    v13 = -2147483647;
    v14 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned int *)(a2 + 24) << 32);
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
      v13 = ((sub_B72F20(a2) & 1) << 30) | 0x80000001;
    v3 = (_DWORD *)sub_B37C30(*(_QWORD *)(a1 + 248), v13, 0, v14, 0);
    sub_B8CC60(a2, (__int64)v3, v15, v16, v17, v18);
  }
LABEL_16:
  v23 = v41[0];
  if ( !v41[0] )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_18;
  v33 = sub_B8C3D0(a2, (__int64)v3, v19, (__int64)v20, v21, v22);
  v34 = *v33;
  v35 = *v33 + 8LL * *((unsigned int *)v33 + 2);
  if ( *v33 >= v35 )
  {
    if ( v34 == v35 )
    {
LABEL_32:
      v23 = v41[0];
LABEL_18:
      v24 = (v23 - 1) & 0x3FFFFFFF | 0x80000000;
      v25 = ((unsigned __int64)*(unsigned int *)(a2 + 24) << 32) | *(unsigned int *)(a2 + 24);
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 <= 5 )
        v24 |= (sub_B72F20(a2) & 1) << 30;
      v26 = sub_B37080(*(_QWORD *)(a1 + 248), v24, v25, 0);
      sub_B8CC60(a2, v26, v27, v28, v29, v30);
      return;
    }
    while ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 127 )
    {
      v35 += 8LL;
      if ( v34 == v35 )
        goto LABEL_32;
    }
  }
  else
  {
    v36 = *v33;
    while ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 127 )
    {
      v36 += 8LL;
      if ( v35 == v36 )
        goto LABEL_32;
    }
    if ( v35 == v36 )
      goto LABEL_32;
  }
}

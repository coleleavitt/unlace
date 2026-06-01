__int64 __fastcall Z3_model_has_interp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v5; // r12
  __int64 v6; // r10
  int v7; // edi
  __int64 v8; // rax
  __int64 *v9; // rsi
  unsigned int v10; // edx
  __int64 *v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // r9
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // r8
  unsigned int v18; // edx
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 *v21; // r9
  __int64 *j; // rax
  __int64 v23; // rdx
  __int64 v25; // rax
  __int64 v26; // rax

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_29B500();
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      a4 = 0;
      goto LABEL_27;
    }
  }
  else if ( !a2 )
  {
    sub_24EA30(a1, 3u, "ast is null");
    return 0;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a3 + 12);
  v8 = *(unsigned int *)(v6 + 32);
  v9 = *(__int64 **)(v6 + 24);
  v10 = v8 - 1;
  v8 *= 24;
  v11 = (__int64 *)((char *)v9 + v8);
  v12 = 24LL * (v7 & v10);
  v13 = &v9[(unsigned __int64)v12 / 8];
  if ( v12 != v8 )
  {
    for ( i = &v9[(unsigned __int64)v12 / 8]; v11 != i; i += 3 )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        LOBYTE(a4) = a3 == v15 && *(_DWORD *)(v15 + 12) == v7;
        if ( (_BYTE)a4 )
          goto LABEL_16;
      }
      else if ( !v15 )
      {
        goto LABEL_9;
      }
    }
  }
  for ( ; v13 != v9; v9 += 3 )
  {
    v25 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      LOBYTE(a4) = a3 == v25 && *(_DWORD *)(v25 + 12) == v7;
      if ( (_BYTE)a4 )
        goto LABEL_16;
    }
    else if ( !v25 )
    {
      break;
    }
  }
LABEL_9:
  v16 = *(unsigned int *)(v6 + 56);
  v17 = *(__int64 **)(v6 + 48);
  v18 = v16 - 1;
  v16 *= 16;
  v19 = (__int64 *)((char *)v17 + v16);
  v20 = 16LL * (v7 & v18);
  v21 = &v17[(unsigned __int64)v20 / 8];
  if ( v20 != v16 )
  {
    for ( j = &v17[(unsigned __int64)v20 / 8]; v19 != j; j += 2 )
    {
      v23 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        LOBYTE(a4) = a3 == v23 && *(_DWORD *)(v23 + 12) == v7;
        if ( (_BYTE)a4 )
          goto LABEL_16;
      }
      else if ( !v23 )
      {
        goto LABEL_15;
      }
    }
  }
  if ( v17 == v21 )
  {
LABEL_15:
    a4 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v26 = *v17;
    if ( (unsigned __int64)*v17 > 1 )
    {
      LOBYTE(a4) = a3 == v26 && *(_DWORD *)(v26 + 12) == v7;
      if ( (_BYTE)a4 )
        goto LABEL_16;
      goto LABEL_31;
    }
    if ( !v26 )
      break;
LABEL_31:
    v17 += 2;
    if ( v21 == v17 )
      goto LABEL_15;
  }
  a4 = 0;
LABEL_16:
  if ( !v5 )
    return a4;
LABEL_27:
  byte_1C7EBA0 = 1;
  return a4;
}


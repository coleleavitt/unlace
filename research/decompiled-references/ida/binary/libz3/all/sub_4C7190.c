__int64 __fastcall sub_4C7190(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edi
  char *v15; // rcx
  unsigned int v16; // edx
  char *v17; // rsi
  __int64 v18; // rdx
  char *v19; // r8
  char *i; // rax
  __int64 v21; // rdx
  unsigned int v22; // edx
  __int64 v23; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(unsigned int *)(a1 + 128);
  v5 = *(__int64 **)(a1 + 120);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v5 + v4);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 == v4 )
  {
LABEL_22:
    if ( v5 != v10 )
    {
      while ( 1 )
      {
        v25 = *v5;
        if ( (unsigned __int64)*v5 > 1 )
        {
          if ( *(_DWORD *)(v25 + 12) == v6 && a2 == v25 )
          {
            v11 = v5;
            goto LABEL_20;
          }
        }
        else if ( !v25 )
        {
          goto LABEL_8;
        }
        v5 += 2;
        if ( v10 == v5 )
          goto LABEL_8;
      }
    }
    goto LABEL_8;
  }
  v11 = &v5[(unsigned __int64)v9 / 8];
  while ( 1 )
  {
    v12 = *v11;
    if ( (unsigned __int64)*v11 > 1 )
      break;
    if ( !v12 )
      goto LABEL_8;
LABEL_5:
    v11 += 2;
    if ( v8 == v11 )
      goto LABEL_22;
  }
  if ( *(_DWORD *)(v12 + 12) != v6 || a2 != v12 )
    goto LABEL_5;
LABEL_20:
  if ( v11[1] )
    return v11[1];
LABEL_8:
  v27[0] = 0;
  sub_4C51C0(a1, a2, v27);
  v13 = *(unsigned int *)(a1 + 184);
  v14 = *(_DWORD *)(a2 + 12);
  v15 = *(char **)(a1 + 176);
  v16 = v13 - 1;
  v13 *= 16;
  v17 = &v15[v13];
  v18 = 16LL * (v14 & v16);
  v19 = &v15[v18];
  if ( v18 != v13 )
  {
    for ( i = &v15[v18]; v17 != i; i += 16 )
    {
      v21 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v21 + 12) == v14 && a2 == v21 )
        {
LABEL_39:
          v22 = *((_DWORD *)i + 2);
          goto LABEL_16;
        }
      }
      else if ( !v21 )
      {
        goto LABEL_15;
      }
    }
  }
  for ( ; v19 != v15; v15 += 16 )
  {
    v26 = *(_QWORD *)v15;
    if ( *(_QWORD *)v15 > 1u )
    {
      if ( *(_DWORD *)(v26 + 12) == v14 && a2 == v26 )
      {
        i = v15;
        goto LABEL_39;
      }
    }
    else if ( !v26 )
    {
      break;
    }
  }
LABEL_15:
  v22 = -1;
LABEL_16:
  v23 = sub_4C6F80(a1, v27, v22);
  sub_4C30F0(a1, a2, v23);
  if ( v27[0] )
    sub_186B220((void *)(v27[0] - 8));
  return v23;
}


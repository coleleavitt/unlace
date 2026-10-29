__int64 __fastcall sub_AC9940(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // esi
  unsigned int v13; // r8d
  __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rdi
  __int64 *i; // rax
  __int64 v18; // rbx
  __int64 v20; // r14
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 *v23; // rcx
  int v24; // edi
  unsigned int v25; // edx
  __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 *v28; // r8
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // edi
  char *v33; // rcx
  unsigned int v34; // edx
  char *v35; // rsi
  __int64 v36; // rdx
  char *v37; // r8
  char *j; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax

  v8 = sub_AC9730(a1, a2, a3);
  if ( !v8 )
    return 0;
  v9 = *(__int64 **)(v8 + 32);
  v10 = v8;
  v11 = *(unsigned int *)(v8 + 40);
  v12 = *(_DWORD *)(a4 + 12);
  v13 = v11 - 1;
  v11 *= 16;
  v14 = (__int64 *)((char *)v9 + v11);
  v15 = 16LL * (v12 & v13);
  v16 = &v9[(unsigned __int64)v15 / 8];
  if ( v15 != v11 )
  {
    for ( i = &v9[(unsigned __int64)v15 / 8]; v14 != i; i += 2 )
    {
      v18 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v12 && a4 == v18 )
          goto LABEL_11;
      }
      else if ( !v18 )
      {
        return v18;
      }
    }
  }
  if ( v9 == v16 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
        break;
      if ( !v18 )
        return v18;
      v9 += 2;
      if ( v16 == v9 )
        return 0;
    }
    if ( *(_DWORD *)(v18 + 12) == v12 && a4 == v18 )
      break;
    v9 += 2;
    if ( v16 == v9 )
      return 0;
  }
  i = v9;
LABEL_11:
  v18 = i[1];
  if ( !v18 )
    return v18;
  v20 = *(_QWORD *)(a1 + 32);
  v21 = sub_15D1F10(i[1]);
  v22 = *(unsigned int *)(v20 + 160);
  v23 = *(__int64 **)(v20 + 152);
  v24 = *(_DWORD *)(v21 + 12);
  v25 = v22 - 1;
  v22 *= 16;
  v26 = (__int64 *)((char *)v23 + v22);
  v27 = 16LL * (v24 & v25);
  v28 = &v23[(unsigned __int64)v27 / 8];
  if ( v27 == v22 )
  {
LABEL_40:
    if ( v23 != v28 )
    {
      while ( 1 )
      {
        v41 = *v23;
        if ( (unsigned __int64)*v23 > 1 )
        {
          if ( *(_DWORD *)(v41 + 12) == v24 && v21 == v41 )
          {
            v29 = v23;
            goto LABEL_38;
          }
        }
        else if ( !v41 )
        {
          goto LABEL_19;
        }
        v23 += 2;
        if ( v28 == v23 )
          goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
  v29 = &v23[(unsigned __int64)v27 / 8];
  while ( 1 )
  {
    v30 = *v29;
    if ( (unsigned __int64)*v29 > 1 )
      break;
    if ( !v30 )
      goto LABEL_19;
LABEL_16:
    v29 += 2;
    if ( v26 == v29 )
      goto LABEL_40;
  }
  if ( *(_DWORD *)(v30 + 12) != v24 || v21 != v30 )
    goto LABEL_16;
LABEL_38:
  if ( v18 == v29[1] )
    return a4;
LABEL_19:
  v31 = *(unsigned int *)(v10 + 16);
  v32 = *(_DWORD *)(v18 + 12);
  v33 = *(char **)(v10 + 8);
  v34 = v31 - 1;
  v31 *= 16;
  v35 = &v33[v31];
  v36 = 16LL * (v32 & v34);
  v37 = &v33[v36];
  if ( v36 != v31 )
  {
    for ( j = &v33[v36]; v35 != j; j += 16 )
    {
      v39 = *(_QWORD *)j;
      if ( *(_QWORD *)j > 1u )
      {
        if ( *(_DWORD *)(v39 + 12) == v32 && v18 == v39 )
        {
LABEL_49:
          v40 = *((_DWORD *)j + 2);
          goto LABEL_27;
        }
      }
      else if ( !v39 )
      {
        goto LABEL_26;
      }
    }
  }
  for ( ; v37 != v33; v33 += 16 )
  {
    v42 = *(_QWORD *)v33;
    if ( *(_QWORD *)v33 > 1u )
    {
      if ( *(_DWORD *)(v42 + 12) == v32 && v18 == v42 )
      {
        j = v33;
        goto LABEL_49;
      }
    }
    else if ( !v42 )
    {
      break;
    }
  }
LABEL_26:
  v40 = 0;
LABEL_27:
  *a5 = v40;
  return v18;
}


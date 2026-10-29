__int64 __fastcall sub_53F1E0(_QWORD *a1, __int64 *a2, char *a3)
{
  __int64 *v6; // rax
  unsigned __int8 v7; // dl
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  const void *v10; // r14
  void *v11; // rdi
  __int64 *v12; // rdx
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // dl
  int *v17; // rax
  int *v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // rdx
  char v28; // bl
  const void *v29; // r15
  void *v30; // rdi
  const void *v31; // r15
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  const void *v35; // r15
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax

  v6 = (__int64 *)a1[31];
  if ( a1[30] > 0xFFFFFFFFFFFFFFFDLL )
  {
    if ( a2 != v6 + 1 )
    {
      v24 = v6[2];
      if ( v24 > 1 )
      {
        v29 = (const void *)v6[1];
        v30 = (void *)*a2;
        if ( a2[2] < v24 )
        {
          v33 = qvector_reserve(a2, *a2, v6[2], 1);
          *a2 = v33;
          v30 = (void *)v33;
        }
        a2[1] = v24;
        memmove(v30, v29, v24 - 1);
        *(_BYTE *)(*a2 + v24 - 1) = 0;
        v6 = (__int64 *)a1[31];
      }
      else
      {
        a2[1] = 0;
        v6 = (__int64 *)a1[31];
      }
    }
    v16 = 7;
    if ( *((_BYTE *)v6 + 100) == 12 )
    {
      *a3 = 37;
      return (a2[1] == 0) + a2[1] - 1;
    }
    goto LABEL_24;
  }
  v7 = *((_BYTE *)v6 + 100);
  if ( v7 == 29 )
    goto LABEL_32;
  if ( v7 > 0x1Du )
  {
    if ( v7 != 45 )
    {
LABEL_46:
      if ( !under_debugger )
        interr(3114);
      goto LABEL_58;
    }
    v12 = (__int64 *)a1[34];
    if ( !v12 )
    {
      if ( !under_debugger )
        interr(3112);
LABEL_58:
      BUG();
    }
    if ( v12 != a2 )
    {
      v13 = v12[1];
      if ( v13 > 1 )
      {
        v31 = (const void *)*v12;
        v32 = (void *)*a2;
        if ( a2[2] < v13 )
        {
          v34 = qvector_reserve(a2, *a2, v12[1], 1);
          *a2 = v34;
          v32 = (void *)v34;
        }
        a2[1] = v13;
        memmove(v32, v31, v13 - 1);
        *(_BYTE *)(*a2 + v13 - 1) = 0;
        v6 = (__int64 *)a1[31];
      }
      else
      {
        a2[1] = 0;
        v6 = (__int64 *)a1[31];
      }
    }
    v14 = *v6;
    if ( !v14 )
      sub_53CC80();
    v15 = *(_QWORD *)(v14 + 32);
    v16 = 7;
    if ( v15 )
    {
      v17 = *(int **)(v14 + 24);
      v18 = &v17[v15];
      if ( v17 != v18 )
      {
        v19 = a1[30];
        v20 = 0;
        while ( 1 )
        {
          v21 = *v17;
          v22 = v20;
          v20 += v21;
          if ( v19 < v20 )
            break;
          if ( v18 == ++v17 )
            goto LABEL_23;
        }
        if ( v19 != v22 )
        {
LABEL_23:
          v16 = 7;
          goto LABEL_24;
        }
        v16 = (v21 < 2) + 6;
      }
    }
LABEL_24:
    *a3 = v16;
    return (a2[1] == 0) + a2[1] - 1;
  }
  if ( v7 == 12 )
  {
    v8 = a1[35];
    if ( v8 )
    {
      if ( a2 != (__int64 *)(v8 + 16) )
      {
        v9 = *(_QWORD *)(v8 + 24);
        if ( v9 < 2 )
        {
          a2[1] = 0;
        }
        else
        {
          v10 = *(const void **)(v8 + 16);
          v11 = (void *)*a2;
          if ( a2[2] < v9 )
          {
            v37 = qvector_reserve(a2, *a2, *(_QWORD *)(v8 + 24), 1);
            *a2 = v37;
            v11 = (void *)v37;
          }
          a2[1] = v9;
          memmove(v11, v10, v9 - 1);
          *(_BYTE *)(*a2 + v9 - 1) = 0;
        }
      }
      *a3 = 33;
    }
    return (a2[1] == 0) + a2[1] - 1;
  }
  if ( v7 != 13 )
    goto LABEL_46;
LABEL_32:
  v25 = a1[33];
  if ( v25 && (*(_BYTE *)(v25 + 117) & 4) == 0 )
  {
    if ( a2 != (__int64 *)(v25 + 16) )
    {
      v26 = *(_QWORD *)(v25 + 24);
      if ( v26 > 1 )
      {
        v35 = *(const void **)(v25 + 16);
        v36 = (void *)*a2;
        if ( a2[2] < v26 )
        {
          v38 = qvector_reserve(a2, *a2, *(_QWORD *)(v25 + 24), 1);
          *a2 = v38;
          v36 = (void *)v38;
        }
        a2[1] = v26;
        memmove(v36, v35, v26 - 1);
        *(_BYTE *)(*a2 + v26 - 1) = 0;
        v25 = a1[33];
      }
      else
      {
        a2[1] = 0;
        v25 = a1[33];
      }
    }
    v27 = *(_QWORD *)(v25 + 24);
    v28 = 7;
    if ( v27 && (unsigned __int64)(v27 - 1) > 5 )
      v28 = 7 - (strncmp(*(const char **)(v25 + 16), "field_", 6u) == 0);
    *a3 = v28;
  }
  return (a2[1] == 0) + a2[1] - 1;
}


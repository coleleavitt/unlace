__int64 __fastcall sub_11E58E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r15
  const void *v6; // r12
  size_t v7; // rbx
  size_t v8; // r14
  const void *v9; // rbp
  __int64 v10; // r13
  const char *v11; // rbp
  const char *v12; // rbp
  const char *v13; // r13
  const char *v15; // rbx
  size_t v16; // rax
  const char *v17; // rbx
  size_t v18; // rax
  const char *v19; // rbx
  size_t v20; // rax
  __int64 v21; // [rsp+8h] [rbp-50h]

  v3 = (a2 - a1) >> 5;
  v4 = (a2 - a1) >> 3;
  if ( v3 > 0 )
  {
    v5 = a1;
    v6 = *(const void **)a3;
    v7 = *(_QWORD *)(a3 + 8);
    v21 = a1 + 32 * v3;
    while ( 1 )
    {
      v13 = *(const char **)v5;
      if ( *(_QWORD *)v5 )
      {
        v8 = strlen(*(const char **)v5);
        if ( v7 == v8 )
        {
          if ( !v7 || !memcmp(v13, v6, v7) )
            return v5;
        }
        else
        {
          v8 = v7;
        }
        v9 = *(const void **)(v5 + 8);
        v10 = v5 + 8;
        if ( !v9 )
        {
          if ( !v8 )
          {
            v5 += 8;
            return v5;
          }
LABEL_10:
          v11 = *(const char **)(v5 + 16);
          v10 = v5 + 16;
          if ( !v11 )
            goto LABEL_14;
          goto LABEL_11;
        }
      }
      else
      {
        v8 = v7;
        if ( !v7 )
          return v5;
        v9 = *(const void **)(v5 + 8);
        v10 = v5 + 8;
        if ( !v9 )
          goto LABEL_10;
      }
      if ( strlen((const char *)v9) == v8 )
      {
        if ( !v8 || !memcmp(v9, v6, v8) )
          return v10;
        goto LABEL_10;
      }
      v11 = *(const char **)(v5 + 16);
      v10 = v5 + 16;
      if ( !v11 )
      {
        if ( !v8 )
          return v10;
        goto LABEL_14;
      }
LABEL_11:
      if ( strlen(v11) != v8 )
      {
        v12 = *(const char **)(v5 + 24);
        v10 = v5 + 24;
        if ( !v12 )
        {
          if ( !v8 )
          {
            v5 += 24;
            return v5;
          }
          goto LABEL_18;
        }
LABEL_15:
        if ( strlen(v12) == v8 && (!v8 || !memcmp(v12, v6, v8)) )
          return v10;
        goto LABEL_18;
      }
      if ( !v8 || !memcmp(v11, v6, v8) )
        return v10;
LABEL_14:
      v12 = *(const char **)(v5 + 24);
      v10 = v5 + 24;
      if ( v12 )
        goto LABEL_15;
LABEL_18:
      v5 += 32;
      if ( v5 == v21 )
      {
        v4 = (a2 - v5) >> 3;
        goto LABEL_29;
      }
    }
  }
  v5 = a1;
LABEL_29:
  if ( v4 == 2 )
  {
LABEL_43:
    v17 = *(const char **)v5;
    if ( *(_QWORD *)v5 )
    {
      v18 = strlen(*(const char **)v5);
      if ( *(_QWORD *)(a3 + 8) == v18 && (!v18 || !memcmp(v17, *(const void **)a3, v18)) )
        return v5;
    }
    else if ( !*(_QWORD *)(a3 + 8) )
    {
      return v5;
    }
    v5 += 8;
    goto LABEL_48;
  }
  if ( v4 == 3 )
  {
    v15 = *(const char **)v5;
    if ( *(_QWORD *)v5 )
    {
      v16 = strlen(*(const char **)v5);
      if ( *(_QWORD *)(a3 + 8) == v16 && (!v16 || !memcmp(v15, *(const void **)a3, v16)) )
        return v5;
    }
    else if ( !*(_QWORD *)(a3 + 8) )
    {
      return v5;
    }
    v5 += 8;
    goto LABEL_43;
  }
  if ( v4 != 1 )
    return a2;
LABEL_48:
  v19 = *(const char **)v5;
  if ( *(_QWORD *)v5 )
  {
    v20 = j__strlen(*(const char **)v5);
    if ( v20 != *(_QWORD *)(a3 + 8) )
      return a2;
    if ( v20 && memcmp(v19, *(const void **)a3, v20) )
      return a2;
  }
  else if ( *(_QWORD *)(a3 + 8) )
  {
    return a2;
  }
  return v5;
}

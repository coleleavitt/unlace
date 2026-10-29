__int64 __fastcall sub_11894D0(__int64 a1, __int64 a2, const void **a3)
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
  __int64 v15; // [rsp+8h] [rbp-50h]

  v3 = (a2 - a1) >> 5;
  v4 = (a2 - a1) >> 3;
  if ( v3 > 0 )
  {
    v5 = a1;
    v6 = *a3;
    v7 = (size_t)a3[1];
    v15 = a1 + 32 * v3;
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
      if ( v8 == strlen((const char *)v9) )
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
      if ( v8 != strlen(v11) )
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
        if ( v8 == strlen(v12) && (!v8 || !memcmp(v12, v6, v8)) )
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
      if ( v15 == v5 )
      {
        v4 = (a2 - v5) >> 3;
        goto LABEL_29;
      }
    }
  }
  v5 = a1;
LABEL_29:
  if ( v4 == 2 )
    goto LABEL_40;
  if ( v4 == 3 )
  {
    if ( sub_1189470((__int64)a3, *(const char **)v5) )
      return v5;
    v5 += 8;
LABEL_40:
    if ( sub_1189470((__int64)a3, *(const char **)v5) )
      return v5;
    v5 += 8;
    goto LABEL_42;
  }
  if ( v4 != 1 )
    return a2;
LABEL_42:
  if ( !sub_1189470((__int64)a3, *(const char **)v5) )
    return a2;
  return v5;
}

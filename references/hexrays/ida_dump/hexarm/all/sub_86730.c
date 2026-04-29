__int64 __fastcall sub_86730(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 *a4,
        _BYTE *a5,
        unsigned __int64 *a6)
{
  __int64 *v10; // r14
  __int64 v11; // rax
  const char *v12; // r15
  const char *v13; // rdx
  int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rcx
  unsigned __int64 v20; // r12
  unsigned __int64 v22; // r14
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 *v27; // rcx
  unsigned __int64 v28; // r12
  __int64 v29; // rax
  const char *v30; // r15
  const char *v31; // rbx
  const char *v32; // rsi
  const char *v33; // rdi
  char *s2; // [rsp+0h] [rbp-40h]

  if ( !a3 )
    return 0;
  *a4 = *a1;
  *a5 = 1;
  *a6 = 0;
  v10 = (__int64 *)*a1;
  if ( !a1[1] )
  {
    *a4 = (unsigned __int64)v10;
    return 1;
  }
  if ( a3 == v10 )
  {
    v22 = a3[2];
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
      *a4 = (unsigned __int64)a3;
      return 1;
    }
    v29 = *(_QWORD *)(v22 + 32);
    if ( *(_QWORD *)(a2 + 8) )
    {
      v30 = *(const char **)a2;
      v31 = s1;
      if ( !v29 )
        goto LABEL_38;
    }
    else
    {
      v30 = s1;
      if ( !v29 )
        goto LABEL_40;
    }
    v31 = *(const char **)(v22 + 24);
LABEL_38:
    if ( strcmp(v31, v30) < 0 )
    {
      *a4 = v22;
      *a5 = 0;
      return 1;
    }
    if ( strcmp(v30, v31) < 0 )
      return 0;
LABEL_40:
    *a6 = v22;
    return 1;
  }
  v11 = a3[4];
  if ( *(_QWORD *)(a2 + 8) )
  {
    v12 = *(const char **)a2;
    if ( !v11 )
    {
      v13 = s1;
      if ( *v12 )
        goto LABEL_7;
LABEL_20:
      *a6 = (unsigned __int64)a3;
      return 1;
    }
  }
  else
  {
    v12 = s1;
    if ( !v11 )
      goto LABEL_20;
  }
  s2 = (char *)a3[3];
  v23 = strcmp(s2, v12);
  v13 = s2;
  if ( v23 >= 0 )
  {
    if ( strcmp(v12, s2) < 0 )
    {
      v15 = *a3;
LABEL_26:
      if ( (v15 & 2) != 0 )
      {
        v28 = (unsigned __int64)a3;
      }
      else
      {
        v24 = a3[1];
        if ( (*(_BYTE *)v24 & 2) != 0 )
        {
          v25 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
          v26 = *v25;
          if ( (*v25 & 2) != 0 )
          {
            v28 = (unsigned __int64)v25;
            if ( v10 == v25 )
              goto LABEL_34;
          }
          else
          {
            if ( a3 == (__int64 *)v25[1] )
            {
              while ( 1 )
              {
                v27 = v25;
                v28 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v26 & 2) != 0 )
                  break;
                v25 = (__int64 *)v28;
                if ( v27 != *(__int64 **)(v28 + 8) )
                  goto LABEL_32;
              }
            }
            else
            {
LABEL_32:
              v28 = (unsigned __int64)v25;
            }
            if ( v10 == (__int64 *)v28 )
              goto LABEL_34;
          }
        }
        else
        {
          do
          {
            v28 = v24;
            v24 = *(_QWORD *)(v24 + 16);
          }
          while ( (*(_BYTE *)v24 & 2) == 0 );
          if ( v10 == (__int64 *)v28 )
            return 0;
        }
      }
      v33 = s1;
      if ( *(_QWORD *)(v28 + 32) )
        v33 = *(const char **)(v28 + 24);
      if ( strcmp(v33, v12) >= 0 )
        return 0;
      if ( (*(_BYTE *)a3[1] & 2) == 0 )
      {
        if ( (**(_BYTE **)(v28 + 16) & 2) != 0 )
        {
          *a4 = v28;
          *a5 = 0;
          return 1;
        }
        return 0;
      }
LABEL_34:
      *a4 = (unsigned __int64)a3;
      *a5 = 1;
      return 1;
    }
    goto LABEL_20;
  }
LABEL_7:
  v14 = strcmp(v12, v13);
  v15 = *a3;
  if ( v14 < 0 )
    goto LABEL_26;
  if ( (*a3 & 2) != 0 )
  {
    v20 = (unsigned __int64)a3;
  }
  else
  {
    v16 = a3[2];
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      v17 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
      v18 = *v17;
      if ( (*v17 & 2) != 0 )
      {
        v20 = (unsigned __int64)v17;
        if ( v10 == v17 )
          goto LABEL_16;
      }
      else
      {
        if ( a3 == (__int64 *)v17[2] )
        {
          while ( 1 )
          {
            v19 = v17;
            v20 = v18 & 0xFFFFFFFFFFFFFFFCLL;
            v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v18 & 2) != 0 )
              break;
            v17 = (__int64 *)v20;
            if ( v19 != *(__int64 **)(v20 + 16) )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          v20 = (unsigned __int64)v17;
        }
        if ( (__int64 *)v20 == v10 )
          goto LABEL_16;
      }
    }
    else
    {
      do
      {
        v20 = v16;
        v16 = *(_QWORD *)(v16 + 8);
      }
      while ( (*(_BYTE *)v16 & 2) == 0 );
      if ( v10 == (__int64 *)v20 )
        return 0;
    }
  }
  v32 = s1;
  if ( *(_QWORD *)(v20 + 32) )
    v32 = *(const char **)(v20 + 24);
  if ( strcmp(v12, v32) < 0 )
  {
    if ( (*(_BYTE *)a3[2] & 2) == 0 )
    {
      if ( (**(_BYTE **)(v20 + 8) & 2) != 0 )
      {
        *a4 = v20;
        *a5 = 1;
        return 1;
      }
      return 0;
    }
LABEL_16:
    *a4 = (unsigned __int64)a3;
    *a5 = 0;
    return 1;
  }
  return 0;
}

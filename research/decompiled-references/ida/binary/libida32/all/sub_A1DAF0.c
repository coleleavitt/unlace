__int64 __fastcall sub_A1DAF0(char *s1, size_t n)
{
  size_t v2; // rbp
  unsigned __int64 v4; // r13
  char *v5; // r14
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  int v9; // eax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _BYTE *v16; // rdx
  char v17; // cl
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  _BYTE *v21; // [rsp+0h] [rbp-58h] BYREF
  size_t v22; // [rsp+8h] [rbp-50h]
  char *v23; // [rsp+10h] [rbp-48h] BYREF
  size_t v24; // [rsp+18h] [rbp-40h]

  LODWORD(v2) = 0;
  v21 = s1;
  v22 = n;
  if ( !n || j__strlen("+") == n && !memcmp(s1, "+", n) )
    return (unsigned int)v2;
  if ( j__strlen("-") == n )
  {
    LODWORD(v2) = 0;
    if ( !memcmp(s1, "-", n) )
      return (unsigned int)v2;
  }
  if ( j__strlen(".nan") == n && !memcmp(s1, ".nan", n)
    || n == j__strlen(".NaN") && !memcmp(s1, ".NaN", n)
    || n == j__strlen(".NAN") && !memcmp(s1, ".NAN", n) )
  {
    goto LABEL_9;
  }
  v2 = j__strlen(".inf");
  if ( ((*s1 - 43) & 0xFD) == 0 )
  {
    v4 = n - 1;
    v5 = s1 + 1;
    if ( n - 1 != v2 )
    {
LABEL_17:
      if ( j__strlen(".Inf") != v4 )
      {
        if ( j__strlen(".INF") != v4 )
          goto LABEL_22;
        if ( !v4 )
          goto LABEL_9;
        goto LABEL_21;
      }
      if ( !v4 )
        goto LABEL_9;
      goto LABEL_19;
    }
    if ( !v2 )
      goto LABEL_9;
LABEL_15:
    if ( !memcmp(v5, ".inf", v2) )
      goto LABEL_9;
    v4 = v2;
    goto LABEL_17;
  }
  v5 = s1;
  if ( n == v2 )
    goto LABEL_15;
  v4 = j__strlen(".Inf");
  if ( n != v4 )
  {
    v4 = n;
    if ( n != j__strlen(".INF") )
      goto LABEL_22;
    goto LABEL_21;
  }
  v5 = s1;
LABEL_19:
  if ( !memcmp(v5, ".Inf", v4) )
    goto LABEL_9;
  if ( j__strlen(".INF") == v4 )
  {
LABEL_21:
    if ( !memcmp(v5, ".INF", v4) )
      goto LABEL_9;
  }
LABEL_22:
  v6 = j__strlen("0o");
  if ( n >= v6 && (!v6 || !memcmp(s1, "0o", v6)) )
  {
    if ( n > 2 )
    {
      v23 = s1 + 2;
      v24 = n - 2;
      v7 = j__strlen("01234567");
      LOBYTE(v2) = sub_2223270(&v23, "01234567", v7, 0) == -1;
      return (unsigned int)v2;
    }
    goto LABEL_26;
  }
  v8 = j__strlen("0x");
  LOBYTE(v9) = sub_9A3FC0((__int64)&v21, "0x", v8);
  LODWORD(v2) = v9;
  if ( (_BYTE)v9 )
  {
    LODWORD(v2) = 0;
    if ( n > 2 )
    {
      v23 = s1 + 2;
      v24 = n - 2;
      v10 = j__strlen("0123456789abcdefABCDEF");
      LOBYTE(v2) = sub_2223270(&v23, "0123456789abcdefABCDEF", v10, 0) == -1;
    }
    return (unsigned int)v2;
  }
  v21 = v5;
  v22 = v4;
  v11 = j__strlen(".");
  if ( !sub_9A3FC0((__int64)&v21, ".", v11)
    || (j__strlen(".") != v4 || v4 && memcmp(v5, ".", v4)) && (v4 <= 1 || strchr("0123456789", v5[1])) )
  {
    v12 = j__strlen("E");
    if ( !sub_9A3FC0((__int64)&v21, "E", v12) )
    {
      v13 = j__strlen("e");
      if ( !sub_9A3FC0((__int64)&v21, "e", v13) )
      {
        v21 = (_BYTE *)sub_A1D5A0((__int64)v21, v22);
        v22 = v14;
        v15 = v14;
        if ( v14 )
        {
          v16 = v21;
          v17 = *v21;
          if ( *v21 != 46 )
          {
LABEL_53:
            if ( (v17 & 0xDF) == 0x45 )
            {
              v22 = v15 - 1;
              v18 = v15 - 1;
              v21 = v16 + 1;
              if ( v18 )
              {
                if ( ((*v21 - 43) & 0xFD) != 0 || (++v21, v22 = v18 - 1, v18 != 1) )
                {
                  sub_A1D5A0((__int64)v21, v22);
                  LOBYTE(v2) = v19 == 0;
                  return (unsigned int)v2;
                }
              }
            }
LABEL_26:
            LODWORD(v2) = 0;
            return (unsigned int)v2;
          }
          ++v21;
          v22 = v15 - 1;
          v21 = (_BYTE *)sub_A1D5A0((__int64)v21, v15 - 1);
          v22 = v20;
          v15 = v20;
          if ( v20 )
          {
            v16 = v21;
            v17 = *v21;
            goto LABEL_53;
          }
        }
LABEL_9:
        LODWORD(v2) = 1;
      }
    }
  }
  return (unsigned int)v2;
}


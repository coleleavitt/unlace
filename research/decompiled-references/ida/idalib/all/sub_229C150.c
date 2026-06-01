const char *__fastcall sub_229C150(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  char *v4; // r13
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  char *v7; // r14
  unsigned __int64 v8; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rdx
  int v13; // eax
  char *v14; // r14
  unsigned __int64 v15; // rbx
  char *v16; // rcx
  int v17; // eax
  void *s1; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v3 = a2;
  s1 = a1;
  v19 = a2;
  if ( a2 <= 7 )
  {
    if ( a2 <= 5 )
    {
      if ( a2 != 5 )
      {
        if ( a2 <= 2 )
        {
LABEL_13:
          if ( a2 <= 4 )
            goto LABEL_41;
          v4 = (char *)s1;
          v7 = (char *)s1;
          if ( *(_DWORD *)s1 == 1836410996 && *((_BYTE *)s1 + 4) == 98 )
          {
LABEL_54:
            v5 = 7;
            v6 = 5;
            goto LABEL_4;
          }
          if ( a2 <= 6 )
          {
LABEL_41:
            if ( a2 <= 1 )
              goto LABEL_46;
            v7 = (char *)s1;
            v6 = -1;
            v8 = a2 - 2;
            if ( *(_WORD *)((char *)s1 + a2 - 2) != 25189 )
              return (const char *)s1;
LABEL_43:
            if ( v3 > v8 )
              v3 = v8;
            v19 = v3;
            if ( v6 == -1 )
            {
LABEL_46:
              if ( v3 )
                return (const char *)s1;
              return (const char *)a1;
            }
LABEL_35:
            v5 = v6;
            v4 = v7;
            goto LABEL_36;
          }
          v6 = -1;
          if ( memcmp(s1, "aarch64", 7u) )
          {
LABEL_7:
            v8 = v3 - 2;
            if ( *(_WORD *)&v7[v3 - 2] != 25189 )
            {
              if ( v6 == -1 )
                return (const char *)s1;
              goto LABEL_35;
            }
            goto LABEL_43;
          }
          v10 = j__strlen("eb");
          if ( sub_2246AB0((__int64 *)&s1, "eb", v10, 0) != -1 )
            return &byte_22F0C30;
          v11 = j__strlen("_be");
          v7 = (char *)s1;
          v3 = v19;
          v4 = (char *)s1;
          if ( v19 <= 6 )
          {
            v6 = 7;
            if ( v11 )
              goto LABEL_33;
            v5 = 12;
            v6 = 10;
          }
          else
          {
            v12 = v19 - 7;
            if ( v19 - 7 > 2 )
            {
              if ( v11 == 3 )
              {
                v13 = memcmp((char *)s1 + 7, "_be", 3u);
                v5 = v13 == 0 ? 12LL : 9LL;
                v6 = v13 == 0 ? 10LL : 7LL;
                goto LABEL_4;
              }
LABEL_60:
              v5 = 9;
              v6 = 7;
              goto LABEL_4;
            }
            if ( v12 != v11 )
              goto LABEL_60;
            v5 = 12;
            v6 = 10;
            if ( v19 != 7 )
            {
              v17 = memcmp((char *)s1 + 7, "_be", v12);
              v5 = v17 == 0 ? 12LL : 9LL;
              v6 = v17 == 0 ? 10LL : 7LL;
            }
          }
          if ( v6 <= v3 )
            goto LABEL_4;
LABEL_33:
          if ( v3 <= 1 )
            goto LABEL_35;
          v8 = v3 - 2;
          if ( *(_WORD *)&v7[v3 - 2] != 25189 )
            goto LABEL_35;
          goto LABEL_43;
        }
        v14 = (char *)a1;
LABEL_26:
        v4 = v14;
        if ( *(_WORD *)v14 == 29281 )
        {
          v5 = 5;
          v6 = 3;
          if ( v14[2] == 109 )
            goto LABEL_4;
        }
        goto LABEL_13;
      }
      v14 = (char *)a1;
LABEL_23:
      v4 = v14;
      if ( *(_DWORD *)v14 == 913142369 && v14[4] == 52 )
        goto LABEL_54;
      if ( a2 > 9 )
      {
        v4 = v14;
        if ( *(_QWORD *)v14 == 0x5F34366863726161LL )
        {
          v5 = 12;
          v6 = 10;
          if ( *((_WORD *)v14 + 4) == 12851 )
            goto LABEL_4;
        }
      }
      goto LABEL_26;
    }
  }
  else
  {
    v4 = (char *)a1;
    if ( *a1 == 0x32335F34366D7261LL )
    {
      v5 = 10;
      v6 = 8;
      goto LABEL_4;
    }
  }
  v4 = (char *)s1;
  v14 = (char *)s1;
  if ( *(_DWORD *)s1 != 913142369 )
    goto LABEL_23;
  v5 = 8;
  v6 = 6;
  if ( *((_WORD *)s1 + 2) != 25908 )
    goto LABEL_23;
LABEL_4:
  if ( v3 - v6 <= 1 || *(_WORD *)&v4[v6] != 25189 )
  {
    v7 = (char *)s1;
    goto LABEL_7;
  }
LABEL_36:
  if ( v3 >= v5 )
  {
    v15 = v3 - v5;
    v16 = &v4[v5];
    s1 = v16;
    v19 = v15;
    if ( v15 )
    {
      if ( (v15 == 1 || *v16 == 118 && (unsigned int)(v16[1] - 48) <= 9)
        && sub_2246AB0((__int64 *)&s1, "eb", 2u, 0) == -1 )
      {
        return (const char *)s1;
      }
      return &byte_22F0C30;
    }
  }
  return (const char *)a1;
}

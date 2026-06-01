__int64 __fastcall sub_4C7FE0(__int64 a1, unsigned int a2, int a3, __int64 a4, _WORD *a5, __int64 a6)
{
  __int64 v9; // r15
  __int64 result; // rax
  int v12; // eax
  char v13; // bp
  char *i; // rbx
  char v15; // r13
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char *v19; // rax
  char v20; // dl

  v9 = sub_5A9ED0(*(_QWORD *)a1, 8);
  if ( !a3 )
  {
    if ( a2 == 95 )
    {
      if ( !strncmp((const char *)a6, "_imp_", 5u) )
        return (unsigned int)(*(_BYTE *)(a6 + 5) == 64 || *(_BYTE *)(a6 + 5) == 95) + 5;
      if ( (unsigned __int8)(((unsigned int)sub_8B6A20(95) >> 16) - 6) > 5u )
      {
        if ( *(_QWORD *)(v9 + 56) )
        {
LABEL_22:
          if ( rangeset_t_find_range(v9 + 48, a2) )
            return 0;
          if ( a2 == 60 )
            goto LABEL_38;
          goto LABEL_24;
        }
LABEL_10:
        if ( *(int *)(a1 + 16) <= 0 )
          goto LABEL_17;
        goto LABEL_11;
      }
      if ( !*(_QWORD *)(v9 + 56) )
        goto LABEL_24;
      goto LABEL_34;
    }
    if ( ((a2 - 43) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)(a1 + 28) = 1;
      return 0;
    }
    if ( (unsigned __int8)(((unsigned int)sub_8B6A20(a2) >> 16) - 6) > 5u )
    {
      if ( a2 != 60 )
      {
        if ( a2 != 36 && a2 != 96 )
          goto LABEL_17;
        if ( !*(_QWORD *)(v9 + 56) )
        {
          if ( *(int *)(a1 + 16) > 0 && strchr(" -*&[](),", a2) )
            return 0;
          goto LABEL_17;
        }
        if ( rangeset_t_find_range(v9 + 48, a2) )
        {
          if ( a2 != 96 )
            return 0;
          goto LABEL_36;
        }
        if ( *(int *)(a1 + 16) <= 0 )
          goto LABEL_27;
        goto LABEL_11;
      }
      if ( !*(_QWORD *)(v9 + 56) )
      {
LABEL_38:
        v12 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v12 + 1;
        if ( v12 >= 0 )
          return 0;
        goto LABEL_17;
      }
      goto LABEL_22;
    }
  }
  if ( a2 == 111 )
  {
    if ( !strncmp((const char *)a6, "perator", 7u) )
    {
      v13 = *(_BYTE *)(a6 + 7);
      for ( i = (char *)(a6 + 7); v13 == 32; ++i )
        v13 = i[1];
      if ( v13 >= 0
        && ((unsigned __int8)(((unsigned int)sub_8B6A20((unsigned int)v13) >> 16) - 18) <= 6u || ispunct(v13)) )
      {
        ++i;
      }
      v15 = *i;
      if ( *i >= 0
        && ((unsigned __int8)(((unsigned int)sub_8B6A20((unsigned int)v15) >> 16) - 18) <= 6u || ispunct(v15))
        && ((v15 & 0xFD) != 0x3C || v15 == v13) )
      {
        LODWORD(i) = (_DWORD)i + 1;
      }
      return (unsigned int)((_DWORD)i - a6);
    }
    if ( *(_QWORD *)(v9 + 56) )
    {
      if ( rangeset_t_find_range(v9 + 48, 111) )
        return 0;
      goto LABEL_24;
    }
    goto LABEL_10;
  }
  if ( *(_QWORD *)(v9 + 56) )
  {
LABEL_34:
    if ( rangeset_t_find_range(v9 + 48, a2) )
    {
      if ( a2 != 96 )
      {
        if ( a2 == 39 )
        {
          v16 = *(_DWORD *)(a1 + 20);
          if ( v16 > 0 )
            *(_DWORD *)(a1 + 20) = v16 - 1;
        }
        return 0;
      }
LABEL_36:
      ++*(_DWORD *)(a1 + 20);
      return 0;
    }
  }
  if ( a2 == 60 )
    goto LABEL_38;
  if ( a2 == 62 )
  {
    if ( --*(_DWORD *)(a1 + 16) >= 0 )
      return 0;
    goto LABEL_17;
  }
  if ( a2 > 0x7F )
    goto LABEL_17;
LABEL_24:
  if ( *(int *)(a1 + 16) > 0 )
  {
LABEL_11:
    if ( strchr(" -*&[](),", a2) )
      return 0;
  }
  if ( a2 == 91 )
  {
    if ( *(_DWORD *)(a1 + 28) )
    {
      if ( a3 == 1 )
      {
        v18 = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 24) = v18 + 1;
        if ( !v18 )
          return 0;
      }
    }
    goto LABEL_17;
  }
  if ( a2 == 93 )
  {
    if ( *(_DWORD *)(a1 + 28) )
    {
      v17 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v17 + 1;
      if ( v17 == 1 )
        return 0;
    }
    goto LABEL_17;
  }
LABEL_27:
  if ( a2 == 32 )
  {
    if ( *(int *)(a1 + 20) > 0 || *(_DWORD *)(a1 + 24) == 1 )
      return 0;
    goto LABEL_17;
  }
  v19 = (char *)a6;
  if ( a2 != 64 )
  {
LABEL_17:
    result = 4294967294LL;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      *a5 = 95;
      return 0xFFFFFFFFLL;
    }
    return result;
  }
  while ( 1 )
  {
    v20 = *v19;
    if ( !*v19 )
      return (unsigned int)((_DWORD)v19 - a6);
    ++v19;
    if ( (unsigned __int8)(v20 - 48) > 9u )
      goto LABEL_17;
  }
}

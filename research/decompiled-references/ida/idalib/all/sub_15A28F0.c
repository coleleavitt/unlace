bool __fastcall sub_15A28F0(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  int v4; // eax
  bool v5; // zf
  unsigned __int16 *v6; // rax
  unsigned int *v7; // rdi
  bool result; // al
  unsigned __int16 *v9; // r8
  __int64 v10; // rdi
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rcx
  unsigned __int16 *v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  const char *v16; // rbx
  size_t v17; // rcx
  size_t v18; // rax
  size_t v19; // rax
  size_t n; // [rsp+8h] [rbp-10h]
  size_t na; // [rsp+8h] [rbp-10h]

  v4 = *(_DWORD *)(a4 + 24);
  if ( v4 == 1 )
  {
    v16 = *(const char **)(a4 + 8);
    v17 = 0;
    if ( v16 )
    {
      n = a3;
      v18 = strlen(v16);
      a3 = n;
      v17 = v18;
    }
LABEL_19:
    result = 1;
    if ( v17 >= a3 )
    {
      result = 0;
      if ( a3 )
        return memcmp(v16, a2, a3) != 0;
    }
    return result;
  }
  if ( v4 )
  {
    v5 = v4 == 2;
    v6 = *(unsigned __int16 **)(a4 + 8);
    if ( v5 )
    {
      v7 = *((unsigned int **)v6 + 2);
      result = 1;
      if ( *v7 < a3 )
        return result;
      goto LABEL_15;
    }
    v9 = v6 + 16;
    v10 = (__int64)&v6[8 * *v6 + 16];
    if ( v6 + 16 == (unsigned __int16 *)v10 )
      return 1;
    if ( *((_DWORD *)v6 + 8) )
    {
      v11 = v6 + 24;
      v12 = v11;
      while ( 1 )
      {
        v13 = v12;
        if ( (unsigned __int16 *)v10 == v12 )
          return 1;
        v12 += 8;
        if ( !*((_DWORD *)v12 - 4) )
        {
          if ( !*((_QWORD *)v13 + 1) )
            return 1;
          while ( 1 )
          {
            v9 = v11;
            if ( (unsigned __int16 *)v10 == v11 )
              break;
            v11 += 8;
            if ( !*((_DWORD *)v11 - 4) )
              goto LABEL_29;
          }
          v16 = nullptr;
          goto LABEL_27;
        }
      }
    }
    if ( !*((_QWORD *)v6 + 5) )
      return 1;
LABEL_29:
    v16 = *((const char **)v9 + 1);
    if ( v16 )
    {
      na = a3;
      v19 = strlen(*((const char **)v9 + 1));
      a3 = na;
      v17 = v19;
    }
    else
    {
LABEL_27:
      v17 = 0;
    }
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(*(_QWORD *)a4 + 40LL);
  result = 1;
  if ( (v14 & 7) == 0 )
  {
    v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 )
    {
      v7 = *(unsigned int **)(v15 + 16);
      if ( *v7 >= a3 )
      {
LABEL_15:
        result = 0;
        if ( a3 )
          return memcmp(v7 + 4, a2, a3) != 0;
      }
    }
  }
  return result;
}

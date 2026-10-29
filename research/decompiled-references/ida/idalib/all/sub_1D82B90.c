bool __fastcall sub_1D82B90(__int64 a1)
{
  char *v1; // rbx
  __int64 v2; // rax
  char *v3; // rbp
  signed __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  char *v7; // r12
  char *v8; // r13
  int v9; // eax
  int v10; // eax

  v1 = *(char **)(a1 + 8);
  v2 = 24LL * *(unsigned int *)(a1 + 4);
  v3 = &v1[v2];
  v4 = 0xAAAAAAAAAAAAAAABLL * (v2 >> 3);
  v5 = v4 >> 2;
  if ( !(v4 >> 2) )
  {
    v8 = *(char **)(a1 + 8);
LABEL_29:
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        if ( v4 != 1 )
        {
LABEL_32:
          LOBYTE(v10) = 0;
          return v10;
        }
        goto LABEL_35;
      }
      if ( (*(_DWORD *)v8 & 0x7FFFFFFF) == 0 || (*(_DWORD *)v8 & 0x7FFFFFFF) == 9 && (unsigned __int8)sub_1D82B90(v8) )
        goto LABEL_19;
      v8 += 24;
    }
    if ( (*(_DWORD *)v8 & 0x7FFFFFFF) == 0 || (*(_DWORD *)v8 & 0x7FFFFFFF) == 9 && (unsigned __int8)sub_1D82B90(v8) )
      goto LABEL_19;
    v8 += 24;
LABEL_35:
    if ( (*(_DWORD *)v8 & 0x7FFFFFFF) != 0 )
    {
      if ( (*(_DWORD *)v8 & 0x7FFFFFFF) != 9 )
        goto LABEL_32;
      if ( !(unsigned __int8)sub_1D82B90(v8) )
      {
        LOBYTE(v10) = 0;
        return v10;
      }
    }
LABEL_19:
    LOBYTE(v10) = v3 != v8;
    return v10;
  }
  v6 = *(_DWORD *)v1 & 0x7FFFFFFF;
  if ( v6 )
  {
    v7 = &v1[96 * v5];
    while ( 1 )
    {
      if ( v6 == 9 && (unsigned __int8)sub_1D82B90(v1) )
      {
LABEL_13:
        LOBYTE(v10) = v3 != v1;
        return v10;
      }
      v8 = v1 + 24;
      if ( (*((_DWORD *)v1 + 6) & 0x7FFFFFFF) == 0
        || (*((_DWORD *)v1 + 6) & 0x7FFFFFFF) == 9 && (unsigned __int8)sub_1D82B90(v1 + 24) )
      {
        goto LABEL_19;
      }
      v8 = v1 + 48;
      if ( (*((_DWORD *)v1 + 12) & 0x7FFFFFFF) == 0
        || (*((_DWORD *)v1 + 12) & 0x7FFFFFFF) == 9 && (unsigned __int8)sub_1D82B90(v1 + 48) )
      {
        goto LABEL_19;
      }
      v8 = v1 + 72;
      if ( (*((_DWORD *)v1 + 18) & 0x7FFFFFFF) == 0 )
        goto LABEL_19;
      if ( (*((_DWORD *)v1 + 18) & 0x7FFFFFFF) == 9 )
      {
        if ( (unsigned __int8)sub_1D82B90(v1 + 72) )
          goto LABEL_19;
        v8 = v1 + 96;
        if ( v1 + 96 == v7 )
        {
LABEL_28:
          v4 = 0xAAAAAAAAAAAAAAABLL * ((v3 - v7) >> 3);
          goto LABEL_29;
        }
      }
      else
      {
        v8 = v1 + 96;
        if ( v1 + 96 == v7 )
          goto LABEL_28;
      }
      v9 = *((_DWORD *)v1 + 24);
      v1 = v8;
      v6 = v9 & 0x7FFFFFFF;
      if ( !v6 )
        goto LABEL_13;
    }
  }
  return v1 != v3;
}

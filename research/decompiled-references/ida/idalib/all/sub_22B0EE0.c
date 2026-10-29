const char *__fastcall sub_22B0EE0(__int64 a1, const void *a2, size_t a3)
{
  char **v4; // rbx
  char **v5; // r13
  char **v7; // rax
  unsigned int v8; // edi
  char **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char **v12; // rsi
  char **v13; // rbx
  char **v14; // r13
  char **v15; // rax
  unsigned int v16; // edi
  char **v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  char **v20; // rcx

  if ( *(_DWORD *)(a1 + 32) != 26 )
  {
    if ( a3 )
    {
      v4 = &off_2BF6320;
      while ( 1 )
      {
        v5 = v4;
        if ( v4[1] == (char *)a3 && !memcmp(a2, *v4, a3) )
          break;
        v4 += 5;
        if ( &unk_2BF6730 == (_UNKNOWN *)v4 )
          return nullptr;
      }
    }
    else
    {
      v7 = &off_2BF6320;
      while ( 1 )
      {
        v5 = v7;
        if ( !v7[1] )
          break;
        v7 += 5;
        if ( v7 == (char **)&unk_2BF6730 )
          return nullptr;
      }
    }
    v8 = *((_DWORD *)v5 + 8);
    v9 = &off_2BF6320;
    v10 = 26;
    if ( v8 )
    {
      while ( 1 )
      {
        v11 = v10 >> 1;
        v12 = &v9[5 * (v10 >> 1)];
        if ( v8 > *((_DWORD *)v12 + 8) )
        {
          v9 = v12 + 5;
          v11 = v10 - v11 - 1;
          if ( v11 <= 0 )
            goto LABEL_16;
        }
        else if ( !v11 )
        {
LABEL_16:
          if ( v9 != (char **)&unk_2BF6730 && v8 == *((_DWORD *)v9 + 8) )
            return v9[2];
          return &byte_22F0C30;
        }
        v10 = v11;
      }
    }
    return nullptr;
  }
  if ( a3 )
  {
    v13 = &off_2BF5820;
    while ( 1 )
    {
      v14 = v13;
      if ( v13[1] == (char *)a3 && !memcmp(a2, *v13, a3) )
        break;
      v13 += 5;
      if ( &unk_2BF6310 == (_UNKNOWN *)v13 )
        return nullptr;
    }
  }
  else
  {
    v15 = &off_2BF5820;
    while ( 1 )
    {
      v14 = v15;
      if ( !v15[1] )
        break;
      v15 += 5;
      if ( &unk_2BF6310 == (_UNKNOWN *)v15 )
        return nullptr;
    }
  }
  v16 = *((_DWORD *)v14 + 8);
  v17 = &off_2BF5820;
  v18 = 70;
  if ( !v16 )
    return nullptr;
  while ( 1 )
  {
    v19 = v18 >> 1;
    v20 = &v17[5 * (v18 >> 1)];
    if ( v16 <= *((_DWORD *)v20 + 8) )
      break;
    v17 = v20 + 5;
    v19 = v18 - v19 - 1;
    if ( v19 <= 0 )
      goto LABEL_36;
LABEL_33:
    v18 = v19;
  }
  if ( v19 )
    goto LABEL_33;
LABEL_36:
  if ( v17 == (char **)&unk_2BF6310 || v16 != *((_DWORD *)v17 + 8) )
    return &byte_22F0C30;
  return v17[2];
}

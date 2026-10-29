/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044478
// Address: 0x0000000100044478

//----- (0000000100044478) ----------------------------------------------------
__int64 __fastcall sub_100044478(__int64 a1)
{
  unsigned __int8 *j; // x20
  __int64 v2; // x19
  __int64 v3; // x27
  unsigned __int8 v4; // w8
  unsigned __int8 *v5; // x21
  __int64 k; // x28
  __int64 v7; // x25
  size_t v8; // x0
  unsigned __int8 *v9; // x11
  unsigned __int8 *i; // x12
  __int64 v11; // x13
  unsigned __int8 *v12; // x14
  unsigned int v13; // t1
  unsigned __int8 *v14; // x12
  int v15; // w12
  int v16; // w13
  int v17; // w11
  _QWORD v19[127]; // [xsp+8h] [xbp-458h]

  j = *(unsigned __int8 **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 556) == 40 )
  {
    if ( *j == 41 )
    {
      v2 = 0;
      *(_QWORD *)(a1 + 8) = ++j;
    }
    else
    {
      v2 = 0;
      v9 = *(unsigned __int8 **)(a1 + 8);
      do
      {
        if ( v2 == 127 )
          return 0xFFFFFFFFLL;
        for ( i = v9 + 1; ; ++i )
        {
          v11 = *v9;
          if ( (unsigned __int64)(v11 - 9) >= 5 && v11 != 32 )
            break;
          j = v9 + 1;
          *(_QWORD *)(a1 + 8) = ++v9;
        }
        if ( (v11 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v11] & 0x100) != 0 || v11 == 95 || v11 == 36 )
        {
          v12 = v9;
          while ( (v11 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v11] & 0x500) != 0 || v11 == 95 || v11 == 36 )
          {
            j = v12 + 1;
            *(_QWORD *)(a1 + 8) = i;
            v13 = *i++;
            v11 = v13;
            ++v12;
          }
          v14 = i - 1;
        }
        else
        {
          v14 = v9;
        }
        *(_BYTE *)(a1 + 556) = v11;
        if ( *v14 )
        {
          *v14 = 0;
          for ( j = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL); ; ++j )
          {
            *(_QWORD *)(a1 + 8) = j;
            v15 = *j;
            if ( (unsigned int)(v15 - 9) >= 5 && v15 != 32 )
              break;
          }
          v14 = j;
        }
        v19[v2] = v9;
        if ( !*v9 )
        {
          if ( *(_BYTE *)(a1 + 556) == 46 )
            goto LABEL_78;
          return 0xFFFFFFFFLL;
        }
        v16 = *(unsigned __int8 *)(a1 + 556);
        if ( (unsigned int)(v16 - 9) < 5 || v16 == 32 )
        {
          v17 = *j;
          *(_BYTE *)(a1 + 556) = v17;
          if ( !v17 )
            return 0xFFFFFFFFLL;
          *j = 0;
          j = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
          *(_QWORD *)(a1 + 8) = j;
          v16 = *(unsigned __int8 *)(a1 + 556);
          v14 = j;
        }
        ++v2;
        v9 = v14;
      }
      while ( v16 == 44 );
      if ( v16 != 41 )
      {
        if ( v16 != 46 )
          return 0xFFFFFFFFLL;
LABEL_78:
        if ( *j == 46 && j[1] == 46 )
          return 4294967294LL;
        return 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    v2 = 0;
  }
  LOBYTE(v3) = *j;
  if ( !*j )
    return v2;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = j + 1;
      if ( v4 )
        break;
      if ( (unsigned __int8)v3 == 34 || (unsigned __int8)v3 == 39 )
      {
        v4 = v3;
        goto LABEL_9;
      }
      if ( !(_DWORD)v2
        || ((v3 & 0x80) != 0 || (_DefaultRuneLocale.__runetype[(unsigned __int8)v3] & 0x100) == 0)
        && (unsigned __int8)v3 != 95
        && (unsigned __int8)v3 != 36 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      for ( k = 0; ; ++k )
      {
        v3 = (char)j[k + 1];
        if ( (v3 < 0 || (_DefaultRuneLocale.__runetype[v3] & 0x500) == 0) && j[k + 1] != 95 && j[k + 1] != 36 )
          break;
      }
      j[k + 1] = 0;
      if ( (int)v2 < 1 )
        goto LABEL_36;
      v7 = 0;
      while ( strcmp((const char *)v19[v7], (const char *)j) )
      {
        if ( (unsigned int)v2 == ++v7 )
          goto LABEL_36;
      }
      *j = v7 ^ 0x80;
      if ( k )
      {
        v8 = strlen((const char *)&j[k + 2]);
        memmove(j + 1, &j[k + 1], v8 + 2);
      }
      else
      {
LABEL_36:
        v5 = &j[k + 1];
      }
      v4 = 0;
      *v5 = v3;
      j = v5;
      if ( !(_DWORD)v3 )
        return v2;
    }
    if ( (unsigned __int8)v3 == 92 )
    {
      if ( !j[1] )
        return 0xFFFFFFFFLL;
      v5 = j + 2;
    }
    else if ( (unsigned __int8)v3 == v4 )
    {
      v4 = 0;
    }
LABEL_9:
    LOBYTE(v3) = *v5;
    j = v5;
  }
  while ( *v5 );
  if ( v4 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)v2;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: back_char
// Address: 0x0000000100064730

//----- (0000000100064730) ----------------------------------------------------
__int64 __fastcall back_char(char **a1)
{
  unsigned int utf8_char; // w0
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  char v9; // w8
  char *v10; // x9
  char *v11; // x8
  char v12; // w10
  char v13; // w10
  char *v14; // x20
  char v15; // w11
  char v16; // w10
  char *v17; // x9
  __int64 v18; // x11
  __int64 v19; // x8
  __uint32_t v20; // w10
  char *v21; // x9
  int v22; // w8
  char v24[4]; // [xsp+10h] [xbp-20h] BYREF
  char v25[4]; // [xsp+14h] [xbp-1Ch] BYREF

  utf8_char = get_utf8_char(a1);
  if ( utf8_char == -1 )
    return 0;
  if ( utf8_char > 0xFF )
    return 92;
  v9 = utf8_char;
  if ( (utf8_char & 0xF8) == 0x30 )
  {
    v10 = *a1;
    v25[0] = utf8_char;
    v11 = v10 + 1;
    v12 = *v10;
    if ( (*v10 & 0xF8) != 0x30 )
    {
      v12 = 0;
      v11 = v10;
    }
    v25[1] = v12;
    v13 = *v11;
    if ( (*v11 & 0xF8) == 0x30 )
    {
      v14 = v11 + 1;
    }
    else
    {
      v13 = 0;
      v14 = v11;
    }
    v25[2] = v13;
    v25[3] = 0;
    qsscanf(v25, "%o", v3, v4, v5, v6, v7, v8, (char)v24);
    v9 = v24[0];
LABEL_12:
    *a1 = v14;
    return (unsigned int)v9;
  }
  if ( (char)utf8_char > 113 )
  {
    if ( (char)utf8_char > 117 )
    {
      if ( (char)utf8_char == 118 )
        return 11;
      if ( (char)utf8_char == 120 )
      {
        v17 = *a1;
        v18 = **a1;
        if ( (v18 & 0x8000000000000000LL) == 0 && (_DefaultRuneLocale.__runetype[v18] & 0x10000) != 0 )
        {
          v24[0] = **a1;
          v14 = v17 + 1;
          v19 = v17[1];
          if ( v19 < 0 )
          {
            LOBYTE(v22) = 0;
          }
          else
          {
            v20 = _DefaultRuneLocale.__runetype[v19];
            v21 = v17 + 2;
            if ( (v20 & 0x10000) != 0 )
              v14 = v21;
            v22 = v19 & ((int)(v20 << 15) >> 31);
          }
          v24[1] = v22;
          v24[2] = 0;
          qsscanf(v24, "%x", v3, v4, v5, v6, v7, v8, (char)v25);
          v9 = v25[0];
          goto LABEL_12;
        }
      }
    }
    else
    {
      if ( (char)utf8_char == 116 )
        v9 = 9;
      if ( (char)utf8_char == 114 )
        return 13;
    }
  }
  else
  {
    if ( (char)utf8_char == 110 )
      v15 = 10;
    else
      v15 = utf8_char;
    if ( (char)utf8_char == 102 )
      v16 = 12;
    else
      v16 = v15;
    if ( (char)utf8_char == 98 )
      v9 = 8;
    if ( (char)utf8_char == 97 )
      v9 = 7;
    if ( (char)utf8_char > 101 )
      return (unsigned int)v16;
  }
  return (unsigned int)v9;
}
// 1000647E0: variable 'v3' is possibly undefined
// 1000647E0: variable 'v4' is possibly undefined
// 1000647E0: variable 'v5' is possibly undefined
// 1000647E0: variable 'v6' is possibly undefined
// 1000647E0: variable 'v7' is possibly undefined
// 1000647E0: variable 'v8' is possibly undefined

__int64 __fastcall dyld_parse_boot_arg_int(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int128 v4; // q0
  const char *v5; // x21
  __int64 v6; // x20
  size_t v7; // x22
  __int64 v8; // x23
  __int64 v9; // x24
  __int64 v10; // x25
  __int64 v11; // x8
  char v12; // w9
  int v13; // w10
  unsigned int v14; // w11
  unsigned __int64 v15; // x8
  __int128 v17; // [xsp+0h] [xbp-80h] BYREF
  unsigned __int64 v18; // [xsp+10h] [xbp-70h]
  char __dst[4]; // [xsp+24h] [xbp-5Ch] BYREF
  unsigned __int64 v20; // [xsp+28h] [xbp-58h]

  *(_QWORD *)&v4 = 0xAAAAAAAAAAAAAAAALL;
  *((_QWORD *)&v4 + 1) = 0xAAAAAAAAAAAAAAAALL;
  v17 = v4;
  v18 = 0xAAAAAAAAAAAAAAAALL;
  v5 = (const char *)&v17;
  v6 = dyld_parse_boot_arg_cstr(a1, a2, &v17, 24);
  if ( !(_DWORD)v6 )
    return v6;
  if ( strstr((char *)&v17, "0x") == (char *)&v17 )
    v5 = (char *)&v17 + 2;
  if ( !a3 )
    return v6;
  v7 = _platform_strlen(v5);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v20 = 0;
  while ( 1 )
  {
    strcpy(__dst, "00");
    if ( v7 == 1 )
    {
      v13 = (unsigned __int8)v5[v10];
      __dst[0] = v5[v10];
      __dst[1] = 48;
      v8 += 4;
      v11 = 1;
    }
    else
    {
      if ( !v7 )
      {
        v11 = 0;
        v12 = 0;
        v8 += 8;
        goto LABEL_16;
      }
      strlcpy(__dst, &v5[v10], 3u);
      v13 = (unsigned __int8)__dst[0];
      v11 = 2;
    }
    v12 = v13 - 48;
    if ( (unsigned int)(v13 - 48) >= 0xA )
    {
      if ( (unsigned int)(v13 - 97) > 5 )
      {
        if ( (unsigned int)(v13 - 65) > 5 )
          goto LABEL_23;
        v12 = v13 - 55;
      }
      else
      {
        v12 = v13 - 87;
      }
    }
LABEL_16:
    v14 = (unsigned __int8)__dst[1] - 48;
    if ( v14 >= 0xA )
      break;
LABEL_21:
    *((_BYTE *)&v20 + v9) = v14 | (16 * v12);
    v7 -= v11;
    v10 += v11;
    if ( ++v9 == 8 )
    {
      v15 = bswap64(v20) >> v8;
      goto LABEL_24;
    }
  }
  if ( (unsigned int)(unsigned __int8)__dst[1] - 97 <= 5 )
  {
    LOBYTE(v14) = __dst[1] - 87;
    goto LABEL_21;
  }
  if ( (unsigned int)(unsigned __int8)__dst[1] - 65 <= 5 )
  {
    LOBYTE(v14) = __dst[1] - 55;
    goto LABEL_21;
  }
LABEL_23:
  v15 = 0;
LABEL_24:
  *a3 = v15;
  return v6;
}

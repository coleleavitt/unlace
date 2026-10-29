__int64 __fastcall _os_log_simple_send(char *a1)
{
  int fd; // w0
  int v3; // w19
  size_t v4; // x22
  const char *v5; // x0
  size_t v6; // x23
  __int64 result; // x0
  size_t v8; // x21
  bool v9; // w8
  unsigned __int64 v10; // x0
  _WORD v11[2]; // [xsp+0h] [xbp-840h] BYREF
  char v12; // [xsp+4h] [xbp-83Ch]
  __int128 v13; // [xsp+8h] [xbp-838h]
  __int128 v14; // [xsp+18h] [xbp-828h]
  __int128 v15; // [xsp+28h] [xbp-818h]
  __int64 v16; // [xsp+38h] [xbp-808h] BYREF
  __int64 v17; // [xsp+48h] [xbp-7F8h] BYREF
  __int64 v18; // [xsp+58h] [xbp-7E8h] BYREF
  _BYTE v19[1944]; // [xsp+68h] [xbp-7D8h] BYREF

  fd = _simple_asl_get_fd();
  if ( fd < 0 )
    return 9;
  if ( (MEMORY[0xFFFFFC105] & 4) != 0 )
    return 0;
  v3 = fd;
  v4 = _platform_strlen(*((const char **)a1 + 2)) + 1;
  v5 = *((const char **)a1 + 1);
  if ( v5 )
    v6 = _platform_strlen(v5) + 1;
  else
    v6 = 0;
  v8 = v6 + v4 + 104;
  v9 = __CFADD__(v6, v4 + 104);
  result = 84;
  if ( v4 < 0xFFFFFFFFFFFFFF98LL && !v9 )
  {
    if ( v8 <= 0x800 )
    {
      v11[0] = v4;
      v11[1] = v6;
      v12 = *a1;
      v13 = *(_OWORD *)(a1 + 24);
      v14 = *(_OWORD *)(a1 + 40);
      v15 = *(_OWORD *)(a1 + 56);
      _platform_memmove(&v16, a1 + 72, 0x10u);
      _platform_memmove(&v17, a1 + 88, 0x10u);
      _platform_memmove(&v18, a1 + 104, 0x10u);
      _platform_strlcpy((int)v19, *((char **)a1 + 2));
      if ( v6 )
        _platform_strlcpy((unsigned int)v19 + v4, *((char **)a1 + 1));
      v10 = __sendto(v3, v11, v8, 0, nullptr, 0);
      if ( (v10 & 0x8000000000000000LL) != 0 )
      {
        return (unsigned int)*__error();
      }
      else if ( v10 >= v8 )
      {
        return 0;
      }
      else
      {
        return 40;
      }
    }
    else
    {
      return 7;
    }
  }
  return result;
}

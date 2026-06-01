/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068B38
// Address: 0x0000000100068B38

//----- (0000000100068B38) ----------------------------------------------------
__int64 __fastcall sub_100068B38(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        va_list a10,
        va_list a11,
        __int64 a12)
{
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  int v17; // w8
  __int64 result; // x0
  unsigned int v19; // w24
  const char *v20; // x8
  char *v21; // x0
  char *v22; // x19
  int v23; // w8
  char *v24; // x0
  char **v25; // [xsp+10h] [xbp-2850h]
  char v26[10240]; // [xsp+18h] [xbp-2848h] BYREF

  v17 = __chkstk_darwin();
  result = 0;
  v25 = &a9;
  if ( v17 > 27 )
  {
    if ( v17 != 28 )
    {
      if ( v17 == 52 )
      {
        qsnprintf(a9, (size_t)a10, "%d.%d", v12, v13, v14, v15, v16, 9);
        return 1;
      }
      else if ( v17 == 86 )
      {
        return (**(__int64 (***)(void))a9)();
      }
      return result;
    }
    return *((unsigned int *)v25 + 6);
  }
  if ( v17 == 23 )
  {
    qvprintf(a9, a10);
    return 0;
  }
  if ( v17 != 24 )
    return result;
  v19 = (unsigned int)a9;
  if ( (_DWORD)a9 == 10 )
    return 0;
  v20 = a10;
  if ( !a10 )
    v20 = "<null>";
  do
  {
    do
    {
      v22 = (char *)v20;
      if ( strncmp(v20, "ICON ", 5u) && strncmp(v22, "AUTOHIDE ", 9u) )
      {
        v23 = (unsigned __int8)*v22 - 64;
        if ( *v22 == 64 )
        {
          v23 = (unsigned __int8)v22[1] - 48;
          if ( v22[1] == 48 )
            v23 = (unsigned __int8)v22[2] - 58;
        }
        if ( v23 )
          break;
      }
      v21 = strchr(v22, 10);
      v20 = v21 + 1;
    }
    while ( v21 );
    if ( strncmp(v22, "HELP\n", 5u) )
      break;
    v24 = strstr(v22, "ENDHELP\n");
    v20 = v24 + 8;
  }
  while ( v24 );
  v25 = (char **)&a12;
  qvsnprintf(v26, 0x2800u, v22, a11);
  printf("%s: %s\n", off_10009FF50[v19], v26);
  result = 0;
  if ( v19 <= 8 && ((1 << v19) & 0x1D9) != 0 )
  {
    qexit(1);
    return *((unsigned int *)v25 + 6);
  }
  return result;
}
// 100068D8C: variable 'v12' is possibly undefined
// 100068D8C: variable 'v13' is possibly undefined
// 100068D8C: variable 'v14' is possibly undefined
// 100068D8C: variable 'v15' is possibly undefined
// 100068D8C: variable 'v16' is possibly undefined
// 10009FF50: using guessed type char *off_10009FF50[12];
// 1000A6A30: using guessed type __int64 __chkstk_darwin(void);

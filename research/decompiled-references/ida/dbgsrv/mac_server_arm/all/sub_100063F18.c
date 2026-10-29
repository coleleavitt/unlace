/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063F18
// Address: 0x0000000100063F18

//----- (0000000100063F18) ----------------------------------------------------
__int64 __fastcall sub_100063F18(
        int a1,
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
  __int64 result; // x0
  unsigned int v14; // w24
  const char *v15; // x8
  char *v16; // x0
  char *v17; // x19
  int v18; // w8
  char *v19; // x0
  char **v20; // [xsp+10h] [xbp-2850h]
  char v21[10240]; // [xsp+18h] [xbp-2848h] BYREF

  result = 0;
  v20 = &a9;
  if ( a1 > 27 )
  {
    if ( a1 != 28 )
    {
      if ( a1 == 52 )
      {
        qsnprintf(a9, (size_t)a10, "%d.%d", a4, a5, a6, a7, a8, 9);
        return 1;
      }
      else if ( a1 == 86 )
      {
        return (**(__int64 (__fastcall ***)(char *))a9)(a9);
      }
      return result;
    }
    return *((unsigned int *)v20 + 6);
  }
  if ( a1 == 23 )
  {
    qvprintf(a9, a10);
    return 0;
  }
  if ( a1 != 24 )
    return result;
  v14 = (unsigned int)a9;
  if ( (_DWORD)a9 == 10 )
    return 0;
  v15 = a10;
  if ( !a10 )
    v15 = "<null>";
  do
  {
    do
    {
      v17 = (char *)v15;
      if ( strncmp(v15, "ICON ", 5u) && strncmp(v17, "AUTOHIDE ", 9u) )
      {
        v18 = (unsigned __int8)*v17 - 64;
        if ( *v17 == 64 )
        {
          v18 = (unsigned __int8)v17[1] - 48;
          if ( v17[1] == 48 )
            v18 = (unsigned __int8)v17[2] - 58;
        }
        if ( v18 )
          break;
      }
      v16 = strchr(v17, 10);
      v15 = v16 + 1;
    }
    while ( v16 );
    if ( strncmp(v17, "HELP\n", 5u) )
      break;
    v19 = strstr(v17, "ENDHELP\n");
    v15 = v19 + 8;
  }
  while ( v19 );
  v20 = (char **)&a12;
  qvsnprintf(v21, 0x2800u, v17, a11);
  printf("%s: %s\n", off_10009BF10[v14], v21);
  result = 0;
  if ( v14 <= 8 && ((1 << v14) & 0x1D9) != 0 )
  {
    qexit(1);
    return *((unsigned int *)v20 + 6);
  }
  return result;
}
// 10009BF10: using guessed type char *off_10009BF10[12];

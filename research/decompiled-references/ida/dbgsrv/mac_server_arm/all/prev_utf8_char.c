/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_utf8_char
// Address: 0x0000000100066B38

//----- (0000000100066B38) ----------------------------------------------------
bool __fastcall prev_utf8_char(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x20
  char *v4; // x19
  _BOOL8 result; // x0
  int v6; // w8
  char *v7; // x19
  int utf8_char; // w8
  char *v12; // [xsp+0h] [xbp-30h] BYREF

  if ( a1 )
    *a1 = -1;
  v3 = *a2;
  v4 = (char *)(*a2 - 1);
  if ( (unsigned __int64)v4 < a3 )
    return 0;
  v6 = (unsigned __int8)*v4;
  if ( *v4 < 0 )
  {
    if ( (v6 & 0xC0) != 0x80 )
      return 0;
    v7 = (char *)(v3 - 2);
    if ( v3 - 2 < a3 )
      return 0;
    if ( (*v7 & 0xC0) == 0x80 )
    {
      v7 = (char *)(v3 - 3);
      if ( v3 - 3 < a3 )
        return 0;
      if ( (*v7 & 0xC0) == 0x80 )
      {
        v7 = (char *)(v3 - 4);
        if ( v3 - 4 < a3 || (*v7 & 0xC0) == 0x80 )
          return 0;
      }
    }
    v12 = v7;
    utf8_char = get_utf8_char(&v12);
    result = utf8_char != -1 && (unsigned __int64)v12 <= v3;
    if ( result )
    {
      if ( a1 )
        *a1 = utf8_char;
      *a2 = (unsigned __int64)v7;
    }
  }
  else
  {
    if ( a1 )
      *a1 = v6;
    *a2 = (unsigned __int64)v4;
    return 1;
  }
  return result;
}
// 100066BD4: conditional instruction was optimized away because w8.4==80

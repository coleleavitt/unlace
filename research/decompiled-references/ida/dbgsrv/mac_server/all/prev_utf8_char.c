/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_utf8_char
// Address: 0x0000000100073CE0

//----- (0000000100073CE0) ----------------------------------------------------
bool __fastcall prev_utf8_char(_DWORD *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  char *v4; // rbx
  bool result; // al
  int v6; // eax
  int utf8_char; // ecx
  char *v8; // [rsp+0h] [rbp-30h] BYREF

  if ( a1 )
    *a1 = -1;
  v3 = *a2;
  v4 = (char *)(*a2 - 1);
  if ( (unsigned __int64)v4 < a3 )
    return 0;
  v6 = (unsigned __int8)*v4;
  if ( (v6 & 0x80u) != 0 )
  {
    if ( (v6 & 0xFFFFFFC0) != 0x80 )
      return 0;
    if ( __OFSUB__(-(v6 & 0xC0), 1) )
    {
      v4 = (char *)(v3 - 2);
      if ( v3 - 2 < a3 )
        return 0;
      if ( __OFSUB__(-(*v4 & 0xC0), 1) )
      {
        v4 = (char *)(v3 - 3);
        if ( v3 - 3 < a3 )
          return 0;
        if ( __OFSUB__(-(*v4 & 0xC0), 1) )
        {
          v4 = (char *)(v3 - 4);
          if ( v3 - 4 < a3 || __OFSUB__(-(*v4 & 0xC0), 1) )
            return 0;
        }
      }
    }
    v8 = v4;
    utf8_char = get_utf8_char(&v8);
    result = utf8_char != -1 && (unsigned __int64)v8 <= v3;
    if ( result )
    {
      if ( a1 )
        *a1 = utf8_char;
      *a2 = (unsigned __int64)v4;
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

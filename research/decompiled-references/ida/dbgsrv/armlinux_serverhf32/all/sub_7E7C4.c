/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E7C4
// Address: 0x0007E7C4

//----- (0007E7C4) --------------------------------------------------------
int __fastcall sub_7E7C4(_BYTE *a1, int a2, char *s, int a4)
{
  size_t v8; // r0
  const char *v9; // r0
  int result; // r0
  size_t v11; // r0
  const char *v12; // r0
  _BYTE v13[4]; // [sp+8h] [bp+0h] BYREF

  if ( !s )
  {
    if ( !under_debugger )
      sub_78AFC(539);
LABEL_13:
    __und(0xFFu);
  }
  if ( !a1 )
  {
    if ( !a2 )
    {
      v11 = strlen(s);
      v12 = sub_7E69C(s, v13, v11 + 100);
      result = _vsnprintf_chk(a2, a2, 1, -1, v12, a4);
      if ( result >= 0 )
        return result;
    }
    return 0;
  }
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_78AFC(1225);
    goto LABEL_13;
  }
  if ( a2 <= 1 )
  {
    if ( a2 )
    {
      *a1 = 0;
      return 0;
    }
    return 0;
  }
  *a1 = 0;
  v8 = strlen(s);
  v9 = sub_7E69C(s, v13, v8 + 100);
  result = _vsnprintf_chk(a1, a2, 1, -1, v9, a4);
  if ( result < 0 || result >= (unsigned int)a2 )
  {
    a1[a2 - 1] = 0;
    return a2 - 1;
  }
  return result;
}
// 14260: using guessed type int __fastcall _vsnprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// D5C00: using guessed type char under_debugger;

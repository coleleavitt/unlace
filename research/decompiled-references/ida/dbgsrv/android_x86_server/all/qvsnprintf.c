/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsnprintf
// Address: 0x000B9620

//----- (000B9620) --------------------------------------------------------
unsigned int __cdecl qvsnprintf(_BYTE *a1, int a2, char *s, int a4)
{
  unsigned int result; // eax
  size_t v5; // eax
  const char *v6; // eax
  _DWORD v7[7]; // [esp+0h] [ebp-1Ch] BYREF

  v7[2] = __readgsdword(0x14u);
  if ( !s )
  {
    if ( !(_BYTE)under_debugger )
      interr(539);
LABEL_21:
    BUG();
  }
  if ( !a1 )
  {
    result = 0;
    if ( a2 )
      return result;
    goto LABEL_10;
  }
  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    goto LABEL_21;
  }
  if ( a2 <= 1 )
  {
    result = 0;
    if ( a2 )
      *a1 = 0;
    return result;
  }
  *a1 = 0;
LABEL_10:
  v5 = strlen(s);
  v7[1] = v5 + 100;
  v6 = sub_B9730(s, (unsigned int)v7 - ((v5 + 115) & 0xFFFFFFF0), v5 + 100);
  result = __vsnprintf_chk(a1, a2, 0, -1, v6, a4);
  if ( (result & 0x80000000) != 0 || a2 && result >= a2 )
  {
    result = 0;
    if ( a1 && a2 )
    {
      a1[a2 - 1] = 0;
      return a2 - 1;
    }
  }
  return result;
}
// 17AD0: using guessed type int __cdecl __vsnprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 13E34C: using guessed type int under_debugger;

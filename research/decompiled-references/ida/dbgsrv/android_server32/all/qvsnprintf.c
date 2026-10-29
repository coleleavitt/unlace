/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsnprintf
// Address: 0x00083FA0

//----- (00083FA0) --------------------------------------------------------
unsigned int __fastcall qvsnprintf(_BYTE *a1, int a2, const char *a3, int a4)
{
  unsigned int result; // r0
  size_t v8; // r0
  const char *v9; // r0
  _DWORD v10[3]; // [sp+8h] [bp-28h] BYREF
  _BYTE *v11; // [sp+14h] [bp-1Ch]
  int v12; // [sp+18h] [bp-18h]
  int v13; // [sp+1Ch] [bp-14h] BYREF

  v12 = a4;
  if ( !a3 )
  {
    if ( !under_debugger )
      interr(539);
LABEL_22:
    __debugbreak();
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
    if ( !under_debugger )
      interr(1225);
    goto LABEL_22;
  }
  result = 0;
  if ( a2 <= 1 )
  {
    if ( a2 )
    {
      *a1 = 0;
      return 0;
    }
    return result;
  }
  *a1 = 0;
LABEL_10:
  v10[2] = &v13;
  v10[1] = &_stack_chk_guard;
  v11 = a1;
  v8 = strlen(a3);
  v9 = sub_840A0(a3, (_BYTE *)v10 - ((v8 + 107) & 0xFFFFFFF8), v8 + 100);
  result = _vsnprintf_chk(v11, a2, 0, -1, v9, v12, v10[0]);
  if ( (result & 0x80000000) != 0 || a2 && result >= a2 )
  {
    if ( v11 )
    {
      result = 0;
      if ( a2 )
      {
        v11[a2 - 1] = 0;
        return a2 - 1;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
// 19328: using guessed type int __fastcall _vsnprintf_chk(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// E0550: using guessed type char under_debugger;

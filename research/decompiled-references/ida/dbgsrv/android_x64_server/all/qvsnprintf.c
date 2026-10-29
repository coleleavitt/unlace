/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsnprintf
// Address: 0x00000000000CB7F0

//----- (00000000000CB7F0) ----------------------------------------------------
__int64 __fastcall qvsnprintf(char *s, __int64 a2, const char *a3, __int64 a4)
{
  unsigned int v6; // r12d
  size_t v7; // rax
  char *v8; // rax
  int v9; // eax
  unsigned __int64 v11; // [rsp+0h] [rbp-30h] BYREF

  v11 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(539);
LABEL_23:
    BUG();
  }
  if ( !s )
  {
    v6 = 0;
    if ( a2 )
      return v6;
LABEL_10:
    v7 = strlen(a3);
    v8 = sub_CB930(a3, (char *)&v11 - ((v7 + 115) & 0xFFFFFFFFFFFFFFF0LL), v7 + 100);
    v6 = 0;
    v9 = __vsnprintf_chk(s, a2, 0, -1, v8, a4);
    if ( v9 < 0 || a2 && v9 >= (unsigned __int64)a2 )
    {
      if ( !s || !a2 )
        return v6;
      v9 = a2 - 1;
      s[(int)a2 - 1] = 0;
      if ( (int)a2 - 1 < 0 )
        return (unsigned int)strlen(s);
    }
    return (unsigned int)v9;
  }
  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    goto LABEL_23;
  }
  if ( a2 > 1 )
  {
    *s = 0;
    goto LABEL_10;
  }
  v6 = 0;
  if ( a2 )
    *s = 0;
  return v6;
}
// 33A70: using guessed type __int64 __fastcall __vsnprintf_chk(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 158B40: using guessed type __int64 under_debugger;

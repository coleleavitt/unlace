__int64 __fastcall sub_3C5490(__int64 a1, const char *a2, int a3, char a4, double a5)
{
  unsigned __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax

  v6 = a3;
  v7 = sub_3C5170(a2);
  if ( v7 < 0 )
  {
    if ( v7 != -1 )
    {
      if ( !under_debugger )
        sub_383060(0xC925u, (__int64)a2, a5);
      BUG();
    }
    return 1;
  }
  if ( (unsigned int)v7 <= 7 && (v8 = a1 + 40LL * v7, *(_BYTE *)(v8 + 41)) )
  {
    if ( get_dtype_size(*(unsigned __int8 *)(v8 + 45)) >= v6 )
      return 1;
    if ( a4 )
      return 0;
    sub_2B4E70((__int64)"AUTOHIDE NONE\nIncorrect size of operand '%s'\n", a2);
    return 0;
  }
  else
  {
    if ( a4 )
      return 0;
    sub_2B4E70((__int64)"AUTOHIDE NONE\nNo operand '%s' in instruction", a2);
    return 0;
  }
}

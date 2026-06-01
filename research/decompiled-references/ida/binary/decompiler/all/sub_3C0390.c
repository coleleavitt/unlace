__int64 __fastcall sub_3C0390(__int64 a1, const char *a2, int a3, char a4)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d

  v5 = a3;
  v6 = sub_3C0070(a2);
  if ( v6 < 0 )
  {
    if ( v6 != -1 )
    {
      if ( !under_debugger )
        sub_37EA20(51493);
      BUG();
    }
    return 1;
  }
  if ( (unsigned int)v6 <= 7 && *(_BYTE *)(a1 + 40LL * v6 + 41) )
  {
    if ( get_dtype_size() >= v5 )
      return 1;
    if ( a4 )
      return 0;
    sub_2B1D90((unsigned int)"AUTOHIDE NONE\nIncorrect size of operand '%s'\n", (_DWORD)a2, v11, v12, v13, v14);
    return 0;
  }
  else
  {
    if ( a4 )
      return 0;
    sub_2B1D90((unsigned int)"AUTOHIDE NONE\nNo operand '%s' in instruction", (_DWORD)a2, v7, v8, v9, v10);
    return 0;
  }
}

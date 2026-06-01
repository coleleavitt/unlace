/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: check_process_exit
// Address: 0x00081D70

//----- (00081D70) --------------------------------------------------------
int __fastcall check_process_exit(int a1, _DWORD *a2, int a3)
{
  int v5; // r4
  int v6; // r0
  __pid_t v7; // r1
  int result; // r0
  __time_t v9; // [sp+Ch] [bp-8h] BYREF

  v5 = -1;
  if ( a3 != 1 )
    v5 = a3;
  v6 = sub_80DC4();
  v7 = sub_807A4(v6, &v9, a1, 0, v5);
  result = 1;
  if ( v7 )
  {
    if ( v7 == -1 )
    {
      if ( a2 )
        *a2 = *(_DWORD *)_errno(v7 + 1);
      return -1;
    }
    if ( (v9 & 0x7F) == 0 )
    {
      result = 0;
      if ( !a2 )
        return result;
      *a2 = BYTE1(v9);
      return 0;
    }
    if ( !((unsigned int)((v9 + 1) << 25) >> 26) )
    {
      if ( !under_debugger )
        interr(1150);
      __debugbreak();
    }
    result = 0;
    if ( a2 )
    {
      *a2 = -(v9 & 0x7F);
      return 0;
    }
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;

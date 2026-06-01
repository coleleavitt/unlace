/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_string
// Address: 0x0000000100074500

//----- (0000000100074500) ----------------------------------------------------
__int64 __fastcall get_error_string(unsigned int a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rax

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x1E3u);
    return sub_100074540();
  }
  else
  {
    off_1000ACFB0();
    return *(_QWORD *)(v2 + 24LL * v1 + 32);
  }
}
// 10007451A: variable 'v2' is possibly undefined
// 100074514: variable 'v1' is possibly undefined
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);
// 1000AE23D: using guessed type char under_debugger;

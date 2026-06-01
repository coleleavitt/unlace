/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_data
// Address: 0x00000001000744C0

//----- (00000001000744C0) ----------------------------------------------------
__int64 __fastcall get_error_data(unsigned int a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rax

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x1E2u);
    return get_error_string(0x1E2u);
  }
  else
  {
    off_1000ACFB0();
    return *(_QWORD *)(v2 + 8LL * v1);
  }
}
// 1000744D6: variable 'v2' is possibly undefined
// 1000744D4: variable 'v1' is possibly undefined
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);
// 1000AE23D: using guessed type char under_debugger;

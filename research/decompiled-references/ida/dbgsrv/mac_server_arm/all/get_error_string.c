/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_string
// Address: 0x00000001000673B0

//----- (00000001000673B0) ----------------------------------------------------
__int64 __fastcall get_error_string(unsigned int a1)
{
  __int64 v1; // x0
  unsigned int v2; // w8

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(483);
    return sub_100067408();
  }
  else
  {
    off_10009D688();
    return *(_QWORD *)(v1 + 24LL * v2 + 32);
  }
}
// 1000673D8: variable 'v1' is possibly undefined
// 1000673D8: variable 'v2' is possibly undefined
// 10009D688: using guessed type void (*off_10009D688)(void);
// 10009D90D: using guessed type char under_debugger;

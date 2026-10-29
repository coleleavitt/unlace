/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_data
// Address: 0x0000000100067360

//----- (0000000100067360) ----------------------------------------------------
__int64 __fastcall get_error_data(unsigned int a1)
{
  __int64 v1; // x0
  unsigned int v2; // w8
  unsigned int v4; // w0

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(482);
    return get_error_string(v4);
  }
  else
  {
    off_10009D688();
    return *(_QWORD *)(v1 + 8LL * v2);
  }
}
// 100067384: variable 'v1' is possibly undefined
// 100067384: variable 'v2' is possibly undefined
// 1000673AD: variable 'v4' is possibly undefined
// 10009D688: using guessed type void (*off_10009D688)(void);
// 10009D90D: using guessed type char under_debugger;

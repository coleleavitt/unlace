/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_data
// Address: 0x00000001000671B0

//----- (00000001000671B0) ----------------------------------------------------
void __fastcall set_error_data(unsigned int a1)
{
  __int64 v1; // x0
  __int64 v2; // x1
  unsigned int v3; // w8
  unsigned int v4; // w0

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(480);
    set_error_string(v4);
  }
  else
  {
    off_10009D688();
    *(_QWORD *)(v1 + 8LL * v3) = v2;
  }
}
// 1000671D4: variable 'v2' is possibly undefined
// 1000671D4: variable 'v1' is possibly undefined
// 1000671D4: variable 'v3' is possibly undefined
// 1000671FD: variable 'v4' is possibly undefined
// 10009D688: using guessed type void (*off_10009D688)(void);
// 10009D90D: using guessed type char under_debugger;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_data
// Address: 0x000000010006C058

//----- (000000010006C058) ----------------------------------------------------
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
    off_1000A5688();
    return *(_QWORD *)(v1 + 8LL * v2);
  }
}
// 10006C080: variable 'v1' is possibly undefined
// 10006C080: variable 'v2' is possibly undefined
// 10006C0A9: variable 'v4' is possibly undefined
// 1000A5688: using guessed type void (*off_1000A5688)(void);
// 1000A590D: using guessed type char under_debugger;

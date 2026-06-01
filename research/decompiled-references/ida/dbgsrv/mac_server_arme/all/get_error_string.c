/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_string
// Address: 0x000000010006C0AC

//----- (000000010006C0AC) ----------------------------------------------------
__int64 __fastcall get_error_string(unsigned int a1)
{
  __int64 v1; // x0
  unsigned int v2; // w8

  if ( a1 >= 4 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(483);
    return sub_10006C108();
  }
  else
  {
    off_1000A5688();
    return *(_QWORD *)(v1 + 24LL * v2 + 32);
  }
}
// 10006C0D8: variable 'v1' is possibly undefined
// 10006C0D8: variable 'v2' is possibly undefined
// 1000A5688: using guessed type void (*off_1000A5688)(void);
// 1000A590D: using guessed type char under_debugger;

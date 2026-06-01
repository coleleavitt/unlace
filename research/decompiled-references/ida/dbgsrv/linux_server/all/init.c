/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: init
// Address: 0x0000000000488EC0

//----- (0000000000488EC0) ----------------------------------------------------
void init()
{
  signed __int64 v0; // rbp
  __int64 i; // rbx

  init_proc();
  v0 = &off_4C20D8 - funcs_488F09;
  if ( v0 )
  {
    for ( i = 0; i != v0; ++i )
      funcs_488F09[i]();
  }
}
// 4C2068: using guessed type __int64 (__fastcall *funcs_488F09[14])();
// 4C20D8: using guessed type __int64 (__fastcall *off_4C20D8)();

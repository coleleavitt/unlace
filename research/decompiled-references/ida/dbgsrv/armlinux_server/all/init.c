/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: init
// Address: 0x00000000004B2C70

//----- (00000000004B2C70) ----------------------------------------------------
void __fastcall init(unsigned int a1, __int64 a2, __int64 a3)
{
  signed __int64 v5; // x20
  __int64 i; // x19
  void (__fastcall *v8)(_QWORD, __int64, __int64); // x3

  v5 = ((char *)&off_519920 - (char *)&off_5198B8) >> 3;
  init_proc();
  if ( v5 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v8 = (void (__fastcall *)(_QWORD, __int64, __int64))*(&off_5198B8 + i);
      v8(a1, a2, a3);
    }
  }
}
// 5198B8: using guessed type char *(*off_5198B8)();
// 519920: using guessed type __int64 (__fastcall *off_519920)();

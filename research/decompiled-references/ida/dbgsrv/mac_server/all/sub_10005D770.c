/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D770
// Address: 0x000000010005D770

//----- (000000010005D770) ----------------------------------------------------
void __fastcall sub_10005D770(_QWORD *__p)
{
  void *v2; // rdi
  void *v3; // rdi

  *__p = off_1000A97C8;
  v2 = (void *)__p[7];
  if ( v2 )
  {
    __p[8] = 0;
    qfree(v2);
    __p[7] = 0;
    __p[9] = 0;
  }
  v3 = (void *)__p[4];
  if ( v3 )
  {
    __p[5] = 0;
    qfree(v3);
  }
  operator delete(__p);
}
// 1000A97C8: using guessed type __int64 (__fastcall *off_1000A97C8[3])();

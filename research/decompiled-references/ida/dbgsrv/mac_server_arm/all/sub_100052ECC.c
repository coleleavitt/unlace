/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100052ECC
// Address: 0x0000000100052ECC

//----- (0000000100052ECC) ----------------------------------------------------
void __fastcall sub_100052ECC(_QWORD *__p)
{
  void *v2; // x0
  void *v3; // x0

  *__p = off_10009AEB8;
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
// 10009AEB8: using guessed type __int64 (__fastcall *off_10009AEB8[3])();

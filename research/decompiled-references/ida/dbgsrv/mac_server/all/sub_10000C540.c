/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C540
// Address: 0x000000010000C540

//----- (000000010000C540) ----------------------------------------------------
void __fastcall sub_10000C540(_QWORD *__p)
{
  void *v1; // rax

  *__p = off_1000A7540;
  v1 = (void *)__p[6];
  if ( v1 )
  {
    __p[7] = 0;
    qfree(v1);
  }
  operator delete(__p);
}
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();

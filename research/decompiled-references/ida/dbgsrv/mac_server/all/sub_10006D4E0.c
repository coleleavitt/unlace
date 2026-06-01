/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D4E0
// Address: 0x000000010006D4E0

//----- (000000010006D4E0) ----------------------------------------------------
void __fastcall sub_10006D4E0(_QWORD *__p)
{
  void *v2; // rdi
  void *v3; // rdi

  *__p = &off_1000AA700;
  v2 = (void *)__p[8];
  if ( v2 )
  {
    __p[9] = 0;
    qfree(v2);
    __p[8] = 0;
    __p[10] = 0;
  }
  v3 = (void *)__p[4];
  if ( v3 )
  {
    __p[5] = 0;
    qfree(v3);
  }
  operator delete(__p);
}
// 1000AA700: using guessed type __int64 (__fastcall *off_1000AA700)();

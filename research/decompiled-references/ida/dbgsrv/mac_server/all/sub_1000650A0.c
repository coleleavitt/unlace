/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000650A0
// Address: 0x00000001000650A0

//----- (00000001000650A0) ----------------------------------------------------
void __fastcall sub_1000650A0(_QWORD *__p)
{
  void *v2; // rdi

  *__p = &off_1000A9D50;
  v2 = (void *)__p[14];
  if ( v2 )
  {
    __p[15] = 0;
    qfree(v2);
    __p[14] = 0;
    __p[16] = 0;
  }
  sub_100069950(__p);
  operator delete(__p);
}
// 1000A9D50: using guessed type __int64 (__fastcall *off_1000A9D50)();

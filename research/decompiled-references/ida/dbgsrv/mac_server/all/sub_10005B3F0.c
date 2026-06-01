/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B3F0
// Address: 0x000000010005B3F0

//----- (000000010005B3F0) ----------------------------------------------------
void __fastcall sub_10005B3F0(_QWORD *__p)
{
  void *v1; // rax

  *__p = &off_1000A96E8;
  v1 = (void *)__p[2];
  if ( v1 )
  {
    __p[3] = 0;
    qfree(v1);
  }
  operator delete(__p);
}
// 1000A96E8: using guessed type __int64 (__fastcall *off_1000A96E8)();

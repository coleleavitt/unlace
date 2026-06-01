/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060C1C
// Address: 0x0000000100060C1C

//----- (0000000100060C1C) ----------------------------------------------------
void __fastcall sub_100060C1C(_QWORD *__p)
{
  void *v2; // x0
  void *v3; // x0

  *__p = &off_10009BBA8;
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
// 10009BBA8: using guessed type __int64 (__fastcall *off_10009BBA8)();

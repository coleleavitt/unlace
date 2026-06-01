/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001E554
// Address: 0x000000010001E554

//----- (000000010001E554) ----------------------------------------------------
void __fastcall sub_10001E554(_QWORD *__p)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0
  void *v5; // x0

  *__p = off_100099B90;
  v2 = (_QWORD *)__p[7];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (void *)__p[5];
  __p[5] = 0;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)__p[2];
  if ( v5 )
  {
    __p[3] = 0;
    qfree(v5);
  }
  operator delete(__p);
}
// 100099B90: using guessed type void (__fastcall __noreturn *off_100099B90[2])();

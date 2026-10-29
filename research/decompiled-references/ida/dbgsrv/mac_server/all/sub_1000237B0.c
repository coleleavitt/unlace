/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000237B0
// Address: 0x00000001000237B0

//----- (00000001000237B0) ----------------------------------------------------
void __fastcall sub_1000237B0(_QWORD *__p)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r14
  void *v4; // rdi
  void *v5; // rdi

  *__p = off_1000A8420;
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
// 1000A8420: using guessed type void (__fastcall __noreturn *off_1000A8420[2])();

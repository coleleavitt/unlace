/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000202E4
// Address: 0x00000001000202E4

//----- (00000001000202E4) ----------------------------------------------------
_QWORD *__fastcall sub_1000202E4(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0
  void *v5; // x0

  *a1 = off_10009DBD0;
  v2 = (_QWORD *)a1[7];
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
  v4 = (void *)a1[5];
  a1[5] = 0;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
    a1[2] = 0;
    a1[4] = 0;
  }
  return a1;
}
// 10009DBD0: using guessed type void (__fastcall __noreturn *off_10009DBD0[2])();

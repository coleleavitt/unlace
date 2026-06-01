/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C494
// Address: 0x000000010001C494

//----- (000000010001C494) ----------------------------------------------------
_QWORD *__fastcall sub_10001C494(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0
  void *v5; // x0

  *a1 = off_100099B90;
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
// 100099B90: using guessed type void (__fastcall __noreturn *off_100099B90[2])();

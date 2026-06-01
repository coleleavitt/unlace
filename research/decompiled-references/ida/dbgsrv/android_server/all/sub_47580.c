/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47580
// Address: 0x0000000000047580

//----- (0000000000047580) ----------------------------------------------------
void __fastcall sub_47580(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0
  void *v5; // x0

  v2 = (_QWORD *)a1[7];
  *a1 = off_1566C8;
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
  }
  operator delete(a1);
}
// 1566C8: using guessed type __int64 (__fastcall *off_1566C8[2])();

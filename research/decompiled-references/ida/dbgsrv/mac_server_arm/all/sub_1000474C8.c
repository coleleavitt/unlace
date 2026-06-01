/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000474C8
// Address: 0x00000001000474C8

//----- (00000001000474C8) ----------------------------------------------------
_QWORD *__fastcall sub_1000474C8(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  _QWORD *v4; // x0
  _QWORD *v5; // x21

  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = off_10009A9A0;
  v2 = (void *)a1[526];
  if ( v2 )
  {
    a1[527] = 0;
    qfree(v2);
    a1[526] = 0;
    a1[528] = 0;
  }
  v3 = (void *)a1[523];
  if ( v3 )
  {
    a1[524] = 0;
    qfree(v3);
    a1[523] = 0;
    a1[525] = 0;
  }
  v4 = (_QWORD *)a1[519];
  if ( v4 != a1 + 519 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      *(_QWORD *)v4[1] = *v4;
      v5[1] = v4[1];
      qfree(v4);
      --a1[521];
      v4 = v5;
    }
    while ( v5 != a1 + 519 );
  }
  return a1;
}
// 10009A9A0: using guessed type void (__fastcall __noreturn *off_10009A9A0[2])();

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B2A4
// Address: 0x000000010004B2A4

//----- (000000010004B2A4) ----------------------------------------------------
_QWORD *__fastcall sub_10004B2A4(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  *a1 = off_10009BB60;
  v2 = (void *)a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
    a1[9] = 0;
    a1[11] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
  return a1;
}
// 10009BB60: using guessed type void (__fastcall __noreturn *off_10009BB60[2])();

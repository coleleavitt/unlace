/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004DB90
// Address: 0x000000010004DB90

//----- (000000010004DB90) ----------------------------------------------------
_QWORD *__fastcall sub_10004DB90(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  *a1 = off_10009FBA0;
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
// 10009FBA0: using guessed type void (__fastcall __noreturn *off_10009FBA0[2])();

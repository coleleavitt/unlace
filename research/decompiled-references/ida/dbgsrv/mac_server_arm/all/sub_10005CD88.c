/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CD88
// Address: 0x000000010005CD88

//----- (000000010005CD88) ----------------------------------------------------
_QWORD *__fastcall sub_10005CD88(_QWORD *a1)
{
  void *v2; // x0

  *a1 = off_10009B970;
  sub_10005E374(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    qfree(v2);
    a1[18] = 0;
    a1[20] = 0;
  }
  return a1;
}
// 10009B970: using guessed type void (__fastcall __noreturn *off_10009B970[2])();

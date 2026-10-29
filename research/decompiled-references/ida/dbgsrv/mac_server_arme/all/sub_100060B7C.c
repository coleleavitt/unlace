/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060B7C
// Address: 0x0000000100060B7C

//----- (0000000100060B7C) ----------------------------------------------------
_QWORD *__fastcall sub_100060B7C(_QWORD *a1)
{
  void *v2; // x0

  *a1 = off_10009F9B0;
  sub_1000625F4(a1 + 17);
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
// 10009F9B0: using guessed type void (__fastcall __noreturn *off_10009F9B0[2])();

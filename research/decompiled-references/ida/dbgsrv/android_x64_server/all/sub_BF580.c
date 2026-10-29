/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF580
// Address: 0x00000000000BF580

//----- (00000000000BF580) ----------------------------------------------------
void __fastcall sub_BF580(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_150660;
  v2 = (void *)a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
    a1[3] = 0;
    a1[5] = 0;
  }
}
// 150660: using guessed type _UNKNOWN *off_150660;

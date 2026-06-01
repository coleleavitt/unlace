/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91390
// Address: 0x0000000000091390

//----- (0000000000091390) ----------------------------------------------------
void __fastcall sub_91390(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = off_14E6F0;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
    a1[1] = 0;
    a1[3] = 0;
  }
}
// 14E6F0: using guessed type __int64 (__fastcall *off_14E6F0[2])();

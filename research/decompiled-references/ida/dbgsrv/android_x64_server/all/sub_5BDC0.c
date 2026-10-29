/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5BDC0
// Address: 0x000000000005BDC0

//----- (000000000005BDC0) ----------------------------------------------------
void __fastcall sub_5BDC0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_147150;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
}
// 147150: using guessed type __int64 (__fastcall *off_147150)();

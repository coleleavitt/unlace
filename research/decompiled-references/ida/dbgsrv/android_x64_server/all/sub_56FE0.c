/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56FE0
// Address: 0x0000000000056FE0

//----- (0000000000056FE0) ----------------------------------------------------
void __fastcall sub_56FE0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_147178;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
}
// 147178: using guessed type __int64 (__fastcall *off_147178)();

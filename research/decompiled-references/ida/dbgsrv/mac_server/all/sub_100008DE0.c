/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008DE0
// Address: 0x0000000100008DE0

//----- (0000000100008DE0) ----------------------------------------------------
void __fastcall sub_100008DE0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = off_1000A7540;
  v2 = (void *)a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
    a1[6] = 0;
    a1[8] = 0;
  }
}
// 1000A7540: using guessed type __int64 (__fastcall *off_1000A7540[7])();

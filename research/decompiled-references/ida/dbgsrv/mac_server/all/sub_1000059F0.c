/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000059F0
// Address: 0x00000001000059F0

//----- (00000001000059F0) ----------------------------------------------------
void __fastcall sub_1000059F0(_QWORD *a1)
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

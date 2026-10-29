/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55154
// Address: 0x0000000000055154

//----- (0000000000055154) ----------------------------------------------------
void __fastcall sub_55154(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[5];
  *a1 = off_1569E8;
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
}
// 1569E8: using guessed type __int64 (__fastcall *off_1569E8[3])();

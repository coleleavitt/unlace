/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B74C
// Address: 0x000000000008B74C

//----- (000000000008B74C) ----------------------------------------------------
void __fastcall sub_8B74C(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[7];
  *a1 = off_15DFC8;
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
    a1[7] = 0;
    a1[9] = 0;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
    a1[4] = 0;
    a1[6] = 0;
  }
}
// 15DFC8: using guessed type __int64 (__fastcall *off_15DFC8[4])();

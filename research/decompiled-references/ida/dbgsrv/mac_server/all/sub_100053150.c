/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053150
// Address: 0x0000000100053150

//----- (0000000100053150) ----------------------------------------------------
void __fastcall sub_100053150(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = off_1000A97C8;
  v2 = (void *)a1[7];
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
// 1000A97C8: using guessed type __int64 (__fastcall *off_1000A97C8[3])();

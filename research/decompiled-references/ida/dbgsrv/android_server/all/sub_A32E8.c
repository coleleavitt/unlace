/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A32E8
// Address: 0x00000000000A32E8

//----- (00000000000A32E8) ----------------------------------------------------
void __fastcall sub_A32E8(_QWORD *a1)
{
  void *v2; // x0

  *a1 = off_15F0A0;
  sub_A49A0(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    qfree(v2);
    a1[18] = 0;
    a1[20] = 0;
  }
}
// 15F0A0: using guessed type __int64 (__fastcall *off_15F0A0[2])();

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A39A8
// Address: 0x00000000000A39A8

//----- (00000000000A39A8) ----------------------------------------------------
void __fastcall sub_A39A8(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  *a1 = off_15F0D0;
  sub_A49A0(a1 + 10);
  v2 = a1[11];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3);
    a1[7] = 0;
    a1[9] = 0;
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4);
    a1[4] = 0;
    a1[6] = 0;
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5);
    a1[1] = 0;
    a1[3] = 0;
  }
}
// 15F0D0: using guessed type __int64 (__fastcall *off_15F0D0[3])();

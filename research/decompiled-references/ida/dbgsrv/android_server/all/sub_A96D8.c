/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A96D8
// Address: 0x00000000000A96D8

//----- (00000000000A96D8) ----------------------------------------------------
void __fastcall sub_A96D8(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  v2 = a1[21];
  *a1 = off_15F3E8;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[21] = 0;
  }
  v3 = (void *)a1[23];
  a1[20] = 0;
  if ( v3 )
  {
    a1[24] = 0;
    qfree(v3);
    a1[23] = 0;
    a1[25] = 0;
  }
  v4 = (void *)a1[17];
  if ( v4 )
  {
    a1[18] = 0;
    qfree(v4);
    a1[17] = 0;
    a1[19] = 0;
  }
  v5 = (void *)a1[14];
  if ( v5 )
  {
    a1[15] = 0;
    qfree(v5);
    a1[14] = 0;
    a1[16] = 0;
  }
  sub_A39A8(a1);
}
// 15F3E8: using guessed type __int64 (__fastcall *off_15F3E8[3])();

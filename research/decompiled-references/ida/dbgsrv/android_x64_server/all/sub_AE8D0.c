/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE8D0
// Address: 0x00000000000AE8D0

//----- (00000000000AE8D0) ----------------------------------------------------
void __fastcall sub_AE8D0(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *a1 = &off_14F7E8;
  v2 = a1[21];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[21] = 0;
  }
  a1[20] = 0;
  v3 = (void *)a1[23];
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
  sub_A8490(a1);
}
// 14F7E8: using guessed type __int64 (__fastcall *off_14F7E8)();

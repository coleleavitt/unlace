/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8490
// Address: 0x00000000000A8490

//----- (00000000000A8490) ----------------------------------------------------
void __fastcall sub_A8490(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *a1 = &off_14F4C0;
  sub_A96B0(a1 + 10);
  v2 = a1[11];
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 0xFFFFFFFFLL);
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
// 14F4C0: using guessed type __int64 (__fastcall *off_14F4C0)();

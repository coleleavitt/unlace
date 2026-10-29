/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7CE0
// Address: 0x00000000000A7CE0

//----- (00000000000A7CE0) ----------------------------------------------------
void __fastcall sub_A7CE0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_14F490;
  sub_A96B0(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    qfree(v2);
    a1[18] = 0;
    a1[20] = 0;
  }
}
// 14F490: using guessed type __int64 (__fastcall *off_14F490)();

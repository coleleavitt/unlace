/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B3A0
// Address: 0x000000010005B3A0

//----- (000000010005B3A0) ----------------------------------------------------
void __fastcall sub_10005B3A0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_1000A96E8;
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 1000A96E8: using guessed type __int64 (__fastcall *off_1000A96E8)();

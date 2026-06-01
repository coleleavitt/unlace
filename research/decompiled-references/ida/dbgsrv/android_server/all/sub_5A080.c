/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A080
// Address: 0x000000000005A080

//----- (000000000005A080) ----------------------------------------------------
void __fastcall sub_5A080(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[5];
  *a1 = &off_1569C0;
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
}
// 1569C0: using guessed type __int64 (__fastcall *off_1569C0)();

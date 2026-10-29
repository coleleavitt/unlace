/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A0B8
// Address: 0x000000000005A0B8

//----- (000000000005A0B8) ----------------------------------------------------
void __fastcall sub_5A0B8(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[5];
  *a1 = &off_1569C0;
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  operator delete(a1);
}
// 1569C0: using guessed type __int64 (__fastcall *off_1569C0)();

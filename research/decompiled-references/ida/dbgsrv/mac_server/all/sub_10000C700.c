/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C700
// Address: 0x000000010000C700

//----- (000000010000C700) ----------------------------------------------------
void __fastcall sub_10000C700(__int64 a1, _QWORD *a2)
{
  void *v2; // rdi
  void *v3; // rdi

  if ( a2 )
  {
    sub_10000C700(a1, *a2);
    sub_10000C700(a1, a2[1]);
    v2 = (void *)a2[10];
    if ( v2 )
    {
      a2[11] = 0;
      qfree(v2);
      a2[10] = 0;
      a2[12] = 0;
    }
    v3 = (void *)a2[7];
    if ( v3 )
    {
      a2[8] = 0;
      qfree(v3);
    }
    operator delete(a2);
  }
}

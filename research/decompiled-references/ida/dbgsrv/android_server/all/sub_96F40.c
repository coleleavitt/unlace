/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96F40
// Address: 0x0000000000096F40

//----- (0000000000096F40) ----------------------------------------------------
void __fastcall sub_96F40(__int64 a1, _QWORD *a2)
{
  void *v4; // x0
  void *v5; // x0

  if ( a2 )
  {
    sub_96F40(a1, *a2);
    sub_96F40(a1, a2[1]);
    v4 = (void *)a2[7];
    if ( v4 )
    {
      a2[8] = 0;
      qfree(v4);
      a2[7] = 0;
      a2[9] = 0;
    }
    v5 = (void *)a2[4];
    if ( v5 )
    {
      a2[5] = 0;
      qfree(v5);
    }
    operator delete(a2);
  }
}

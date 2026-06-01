/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A090
// Address: 0x000000010000A090

//----- (000000010000A090) ----------------------------------------------------
void __fastcall sub_10000A090(__int64 a1, _QWORD *a2)
{
  void *v2; // rdi
  void *v3; // rdi

  if ( a2 )
  {
    sub_10000A090(a1, *a2);
    sub_10000A090(a1, a2[1]);
    v2 = (void *)a2[10];
    if ( v2 )
    {
      a2[11] = 0;
      qfree(v2);
      a2[10] = 0;
      a2[12] = 0;
    }
    v3 = (void *)a2[6];
    if ( v3 )
    {
      a2[7] = 0;
      qfree(v3);
    }
    operator delete(a2);
  }
}

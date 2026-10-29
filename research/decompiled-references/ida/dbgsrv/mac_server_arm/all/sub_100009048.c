/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009048
// Address: 0x0000000100009048

//----- (0000000100009048) ----------------------------------------------------
void __fastcall sub_100009048(__int64 a1, _QWORD *a2)
{
  void *v4; // x0
  void *v5; // x0

  if ( a2 )
  {
    sub_100009048(a1, *a2);
    sub_100009048(a1, a2[1]);
    v4 = (void *)a2[10];
    if ( v4 )
    {
      a2[11] = 0;
      qfree(v4);
      a2[10] = 0;
      a2[12] = 0;
    }
    v5 = (void *)a2[6];
    if ( v5 )
    {
      a2[7] = 0;
      qfree(v5);
    }
    operator delete(a2);
  }
}

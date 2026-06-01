/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476E8
// Address: 0x00000000000476E8

//----- (00000000000476E8) ----------------------------------------------------
void __fastcall sub_476E8(__int64 a1, _QWORD *a2)
{
  void *v4; // x0

  if ( a2 )
  {
    sub_476E8(a1, *a2);
    sub_476E8(a1, a2[1]);
    v4 = (void *)a2[4];
    if ( v4 )
    {
      a2[5] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}

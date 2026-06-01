/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003C4FC
// Address: 0x000000010003C4FC

//----- (000000010003C4FC) ----------------------------------------------------
void __fastcall sub_10003C4FC(__int64 a1, _QWORD *a2)
{
  void *v4; // x0

  if ( a2 )
  {
    sub_10003C4FC(a1, *a2);
    sub_10003C4FC(a1, a2[1]);
    v4 = (void *)a2[4];
    if ( v4 )
    {
      a2[5] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}

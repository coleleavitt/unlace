/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48970
// Address: 0x0000000000048970

//----- (0000000000048970) ----------------------------------------------------
void __fastcall sub_48970(__int64 a1, _QWORD *a2)
{
  void *v4; // x0

  if ( a2 )
  {
    sub_48970(a1, *a2);
    sub_48970(a1, a2[1]);
    v4 = (void *)a2[5];
    if ( v4 )
    {
      a2[6] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}

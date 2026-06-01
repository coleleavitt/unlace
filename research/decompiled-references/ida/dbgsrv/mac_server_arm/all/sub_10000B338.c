/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000B338
// Address: 0x000000010000B338

//----- (000000010000B338) ----------------------------------------------------
void __fastcall sub_10000B338(__int64 a1, _QWORD *a2)
{
  void *v4; // x0

  if ( a2 )
  {
    sub_10000B338(a1, *a2);
    sub_10000B338(a1, a2[1]);
    v4 = (void *)a2[266];
    if ( v4 )
    {
      a2[267] = 0;
      qfree(v4);
    }
    operator delete(a2);
  }
}

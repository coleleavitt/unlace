/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C7D0
// Address: 0x000000010000C7D0

//----- (000000010000C7D0) ----------------------------------------------------
void __fastcall sub_10000C7D0(__int64 a1, _QWORD *a2)
{
  void *v2; // rdi

  if ( a2 )
  {
    sub_10000C7D0(a1, *a2);
    sub_10000C7D0(a1, a2[1]);
    v2 = (void *)a2[266];
    if ( v2 )
    {
      a2[267] = 0;
      qfree(v2);
    }
    operator delete(a2);
  }
}

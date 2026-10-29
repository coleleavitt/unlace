/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80260
// Address: 0x0000000000080260

//----- (0000000000080260) ----------------------------------------------------
void __fastcall sub_80260(__int64 a1, _QWORD *a2)
{
  void *v2; // rdi

  if ( a2 )
  {
    sub_80260(a1, *a2);
    sub_80260(a1, a2[1]);
    v2 = (void *)a2[4];
    if ( v2 )
    {
      a2[5] = 0;
      qfree(v2);
    }
    operator delete(a2);
  }
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_488F0
// Address: 0x00000000000488F0

//----- (00000000000488F0) ----------------------------------------------------
void __fastcall sub_488F0(__int64 a1, _QWORD *a2)
{
  void *v2; // rdi

  if ( a2 )
  {
    sub_488F0(a1, *a2);
    sub_488F0(a1, a2[1]);
    v2 = (void *)a2[9];
    if ( v2 )
    {
      a2[10] = 0;
      qfree(v2);
    }
    operator delete(a2);
  }
}

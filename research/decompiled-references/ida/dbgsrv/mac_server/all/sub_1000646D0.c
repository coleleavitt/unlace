/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000646D0
// Address: 0x00000001000646D0

//----- (00000001000646D0) ----------------------------------------------------
void __fastcall sub_1000646D0(__int64 a1, int *a2)
{
  void *v2; // rdi

  if ( a2 )
  {
    sub_1000646D0(a1, *(_QWORD *)a2);
    sub_1000646D0(a1, *((_QWORD *)a2 + 1));
    if ( a2[10] >= -1 )
    {
      v2 = *((void **)a2 + 6);
      if ( v2 )
      {
        *((_QWORD *)a2 + 7) = 0;
        qfree(v2);
      }
    }
    operator delete(a2);
  }
}

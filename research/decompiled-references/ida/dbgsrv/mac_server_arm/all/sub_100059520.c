/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059520
// Address: 0x0000000100059520

//----- (0000000100059520) ----------------------------------------------------
void __fastcall sub_100059520(__int64 a1, int *a2)
{
  void *v4; // x0

  if ( a2 )
  {
    sub_100059520(a1, *(_QWORD *)a2);
    sub_100059520(a1, *((_QWORD *)a2 + 1));
    if ( a2[10] >= -1 )
    {
      v4 = *((void **)a2 + 6);
      if ( v4 )
      {
        *((_QWORD *)a2 + 7) = 0;
        qfree(v4);
      }
    }
    operator delete(a2);
  }
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024690
// Address: 0x0000000100024690

//----- (0000000100024690) ----------------------------------------------------
__int64 __fastcall sub_100024690(__int64 a1)
{
  void *v2; // x0

  free_idcv((unsigned __int8 *)(a1 + 24));
  v2 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return a1;
}

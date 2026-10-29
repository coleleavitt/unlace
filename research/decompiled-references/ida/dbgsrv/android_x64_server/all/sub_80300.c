/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80300
// Address: 0x0000000000080300

//----- (0000000000080300) ----------------------------------------------------
void __fastcall sub_80300(__int64 a1, char *a2, double a3, __m128 a4)
{
  if ( a2 )
  {
    sub_80300(a1, *(_QWORD **)a2);
    sub_80300(a1, *((_QWORD **)a2 + 1));
    free_idcv(a2 + 40, a3, a4);
    operator delete(a2);
  }
}

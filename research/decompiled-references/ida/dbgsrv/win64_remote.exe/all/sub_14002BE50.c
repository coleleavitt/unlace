/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002BE50
// Address: 0x000000014002BE50

//----- (000000014002BE50) ----------------------------------------------------
void __fastcall sub_14002BE50(__int64 a1)
{
  void *v2; // rcx

  sub_140029390(a1 + 24);
  v2 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}

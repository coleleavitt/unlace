/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4379A0
// Address: 0x00000000004379A0

//----- (00000000004379A0) ----------------------------------------------------
void __fastcall sub_4379A0(__int64 a1)
{
  void *v2; // x0

  sub_448310((__int64 *)(a1 + 24));
  v2 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v2);
  }
}

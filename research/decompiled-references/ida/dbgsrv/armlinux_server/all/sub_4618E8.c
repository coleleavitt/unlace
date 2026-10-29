/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4618E8
// Address: 0x00000000004618E8

//----- (00000000004618E8) ----------------------------------------------------
void __fastcall sub_4618E8(__int64 a1)
{
  void *v1; // x1

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v1);
  }
}

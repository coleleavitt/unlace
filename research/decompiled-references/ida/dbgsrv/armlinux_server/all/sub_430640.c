/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430640
// Address: 0x0000000000430640

//----- (0000000000430640) ----------------------------------------------------
void __fastcall sub_430640(__int64 a1)
{
  void *v1; // x1

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v1);
  }
}

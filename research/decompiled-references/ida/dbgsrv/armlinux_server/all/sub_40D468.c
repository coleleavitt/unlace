/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D468
// Address: 0x000000000040D468

//----- (000000000040D468) ----------------------------------------------------
void __fastcall sub_40D468(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  v2 = *(void **)(a1 + 136);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    j__free(v2);
  }
  v3 = *(void **)(a1 + 112);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    j__free(v3);
  }
  sub_40D410(a1 + 64, *(_QWORD **)(a1 + 80));
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    j__free(v4);
  }
  v5 = *(void **)(a1 + 16);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    j__free(v5);
  }
}

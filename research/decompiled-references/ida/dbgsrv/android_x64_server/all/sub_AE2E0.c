/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE2E0
// Address: 0x00000000000AE2E0

//----- (00000000000AE2E0) ----------------------------------------------------
void __fastcall sub_AE2E0(void **a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = nullptr;
    qfree(v2);
    a1[9] = nullptr;
    a1[11] = nullptr;
  }
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = nullptr;
    qfree(v3);
    a1[6] = nullptr;
    a1[8] = nullptr;
  }
  v4 = a1[3];
  if ( v4 )
  {
    a1[4] = nullptr;
    qfree(v4);
    a1[3] = nullptr;
    a1[5] = nullptr;
  }
  v5 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    qfree(v5);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}

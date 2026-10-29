/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057780
// Address: 0x0000000140057780

//----- (0000000140057780) ----------------------------------------------------
void __fastcall sub_140057780(void **a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  sub_140058320((__int64)a1);
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = nullptr;
    j_free(v2);
    a1[6] = nullptr;
    a1[8] = nullptr;
  }
  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = nullptr;
    j_free(v3);
    a1[3] = nullptr;
    a1[5] = nullptr;
  }
  v4 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j_free(v4);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}

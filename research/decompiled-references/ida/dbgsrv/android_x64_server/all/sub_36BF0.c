/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36BF0
// Address: 0x0000000000036BF0

//----- (0000000000036BF0) ----------------------------------------------------
void __fastcall sub_36BF0(void **a1)
{
  void *v2; // rdi

  v2 = *a1;
  if ( v2 )
  {
    a1[1] = nullptr;
    qfree(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}

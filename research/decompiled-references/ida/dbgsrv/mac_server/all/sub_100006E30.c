/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006E30
// Address: 0x0000000100006E30

//----- (0000000100006E30) ----------------------------------------------------
void __fastcall sub_100006E30(void **a1)
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

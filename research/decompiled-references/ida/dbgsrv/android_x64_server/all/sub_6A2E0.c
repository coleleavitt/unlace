/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A2E0
// Address: 0x000000000006A2E0

//----- (000000000006A2E0) ----------------------------------------------------
void __fastcall sub_6A2E0(void **a1)
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

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F280
// Address: 0x000000000005F280

//----- (000000000005F280) ----------------------------------------------------
void __fastcall sub_5F280(void **a1)
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

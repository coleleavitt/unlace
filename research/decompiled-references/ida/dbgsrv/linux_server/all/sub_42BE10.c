/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BE10
// Address: 0x000000000042BE10

//----- (000000000042BE10) ----------------------------------------------------
void __fastcall sub_42BE10(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j__free(v1);
  }
}

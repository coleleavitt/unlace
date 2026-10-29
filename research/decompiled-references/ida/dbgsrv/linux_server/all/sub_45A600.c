/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A600
// Address: 0x000000000045A600

//----- (000000000045A600) ----------------------------------------------------
void __fastcall sub_45A600(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j__free(v1);
  }
}

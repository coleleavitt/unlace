/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_436BB0
// Address: 0x0000000000436BB0

//----- (0000000000436BB0) ----------------------------------------------------
void __fastcall sub_436BB0(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j__free(v1);
  }
}

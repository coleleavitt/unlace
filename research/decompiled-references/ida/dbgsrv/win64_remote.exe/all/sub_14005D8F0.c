/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D8F0
// Address: 0x000000014005D8F0

//----- (000000014005D8F0) ----------------------------------------------------
void __fastcall sub_14005D8F0(void **Block)
{
  void *v2; // rcx

  v2 = *Block;
  if ( v2 != (void *)-1LL )
    CloseHandle(v2);
  j_j_free(Block);
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000A590
// Address: 0x000000014000A590

//----- (000000014000A590) ----------------------------------------------------
void __fastcall sub_14000A590(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    j_j_free(v1);
}

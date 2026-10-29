/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140037180
// Address: 0x0000000140037180

//----- (0000000140037180) ----------------------------------------------------
void __fastcall sub_140037180(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_140037230(v2 + 16);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    j_j_free(v3);
}

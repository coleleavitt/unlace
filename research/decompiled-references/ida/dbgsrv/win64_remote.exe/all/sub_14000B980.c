/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B980
// Address: 0x000000014000B980

//----- (000000014000B980) ----------------------------------------------------
void __fastcall sub_14000B980(__int64 a1)
{
  void *v2; // rcx

  if ( *(int *)a1 >= -1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      j_free(v2);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)a1 = -2;
  }
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452D88
// Address: 0x0000000000452D88

//----- (0000000000452D88) ----------------------------------------------------
void *__fastcall sub_452D88(__int64 a1)
{
  void *v2; // x20

  if ( !*(_BYTE *)(a1 + 760) )
  {
    v2 = *(void **)(a1 + 696);
    if ( v2 )
    {
      sub_452D58(*(void ***)(a1 + 696));
      j_j__free_0(v2);
    }
  }
  *(_QWORD *)(a1 + 696) = 0;
  *(_BYTE *)(a1 + 760) = 0;
  return sub_452C18(a1 + 704);
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37AA0
// Address: 0x00037AA0

//----- (00037AA0) --------------------------------------------------------
int __fastcall sub_37AA0(int a1, int a2)
{
  char *v2; // r2

  if ( *(_DWORD *)(a1 + 36) )
    v2 = *(char **)(a1 + 32);
  else
    v2 = &byte_B3CBE;
  return get_idcv_attr(a2, a1, v2, 0);
}
// B3CBE: using guessed type char byte_B3CBE;

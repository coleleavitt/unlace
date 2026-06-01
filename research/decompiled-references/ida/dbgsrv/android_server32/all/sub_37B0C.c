/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37B0C
// Address: 0x00037B0C

//----- (00037B0C) --------------------------------------------------------
int __fastcall sub_37B0C(int a1, int a2)
{
  char *v2; // r2

  if ( *(_DWORD *)(a1 + 36) )
    v2 = *(char **)(a1 + 32);
  else
    v2 = &byte_B3CBE;
  *(_DWORD *)(a2 + 8) = get_idcv_attr(0, a1, v2, 0) == 0;
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;

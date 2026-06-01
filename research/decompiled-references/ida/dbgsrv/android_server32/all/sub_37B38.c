/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37B38
// Address: 0x00037B38

//----- (00037B38) --------------------------------------------------------
int __fastcall sub_37B38(int a1, int a2)
{
  char *v3; // r1

  if ( *(_DWORD *)(a1 + 36) )
    v3 = *(char **)(a1 + 32);
  else
    v3 = &byte_B3CBE;
  *(_DWORD *)(a2 + 8) = del_idcv_attr(a1, v3) == 0;
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;

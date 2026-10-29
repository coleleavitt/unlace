/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44830
// Address: 0x00044830

//----- (00044830) --------------------------------------------------------
int __cdecl sub_44830(int a1, int a2)
{
  char *v2; // edx

  if ( *(_DWORD *)(a1 + 28) )
    v2 = *(char **)(a1 + 24);
  else
    v2 = byte_EF875;
  return get_idcv_attr(a2, a1, v2, 0);
}

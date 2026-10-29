/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448F0
// Address: 0x000448F0

//----- (000448F0) --------------------------------------------------------
int __cdecl sub_448F0(int a1, int a2)
{
  char *v2; // ecx

  if ( *(_DWORD *)(a1 + 28) )
    v2 = *(char **)(a1 + 24);
  else
    v2 = byte_EF875;
  *(_DWORD *)(a2 + 4) = get_idcv_attr(0, a1, v2, 0) == 0;
  return 0;
}

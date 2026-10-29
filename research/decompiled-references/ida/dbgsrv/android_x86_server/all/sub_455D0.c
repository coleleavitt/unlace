/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455D0
// Address: 0x000455D0

//----- (000455D0) --------------------------------------------------------
int __cdecl sub_455D0(int a1, int a2)
{
  char *v2; // ecx

  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = byte_EF875;
  *(_DWORD *)(a2 + 4) = *v2;
  return 0;
}

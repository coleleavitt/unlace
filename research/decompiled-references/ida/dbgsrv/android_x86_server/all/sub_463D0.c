/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463D0
// Address: 0x000463D0

//----- (000463D0) --------------------------------------------------------
int __cdecl sub_463D0(int a1, int a2)
{
  char *v2; // eax

  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = byte_EF875;
  *(_DWORD *)(a2 + 4) = qunlink(v2);
  return 0;
}

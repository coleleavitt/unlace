/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DF0
// Address: 0x00044DF0

//----- (00044DF0) --------------------------------------------------------
int __cdecl sub_44DF0(int a1, int a2)
{
  char *v2; // eax

  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = byte_EF875;
  *(_DWORD *)(a2 + 4) = call_system((int)v2);
  return 0;
}

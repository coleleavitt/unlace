/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46500
// Address: 0x00046500

//----- (00046500) --------------------------------------------------------
int __cdecl sub_46500(int a1, int a2)
{
  const char *v2; // eax

  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(const char **)(a1 + 4);
  else
    v2 = byte_EF875;
  *(_DWORD *)(a2 + 4) = atol(v2);
  return 0;
}

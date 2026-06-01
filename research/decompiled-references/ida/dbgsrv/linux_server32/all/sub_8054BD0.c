/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054BD0
// Address: 0x08054BD0

//----- (08054BD0) --------------------------------------------------------
int __cdecl sub_8054BD0(int a1)
{
  if ( *(_DWORD *)(a1 + 64) == *(_DWORD *)(a1 + 80) )
  {
    sub_8054B10(*(_DWORD *)(a1 + 724), 19);
    *(_BYTE *)(*(_DWORD *)(a1 + 668) + 44) = 1;
  }
  *(_WORD *)(a1 + 768) = 256;
  return 1;
}

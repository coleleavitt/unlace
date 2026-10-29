/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79330
// Address: 0x00079330

//----- (00079330) --------------------------------------------------------
char __cdecl sub_79330(int a1, void *ptr)
{
  int v2; // ecx
  int i; // edx

  v2 = 40 * *(_DWORD *)(a1 + 136);
  if ( !v2 )
    return 0;
  for ( i = *(_DWORD *)(a1 + 132); *(void **)(i + 28) != ptr; i += 40 )
  {
    v2 -= 40;
    if ( !v2 )
      return 0;
  }
  sub_79CC0((_DWORD *)(a1 + 132), i);
  qfree(ptr);
  return 1;
}

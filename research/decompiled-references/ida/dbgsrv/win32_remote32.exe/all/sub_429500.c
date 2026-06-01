/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429500
// Address: 0x00429500

//----- (00429500) --------------------------------------------------------
int __stdcall sub_429500(_DWORD *a1)
{
  void **v1; // esi
  unsigned int v2; // eax
  int v3; // edx
  _DWORD *v4; // ecx

  v1 = (void **)(a1 + 49);
  v2 = a1[50] + 1;
  if ( v2 > a1[51] )
    *v1 = sub_453B00((int)(a1 + 49), *v1, v2, 0x10u);
  v3 = a1[50];
  v4 = *v1;
  a1[50] = v3 + 1;
  v4[4 * v3] = a1[27];
  return 0;
}

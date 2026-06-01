/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8076EC0
// Address: 0x08076EC0

//----- (08076EC0) --------------------------------------------------------
int __cdecl sub_8076EC0(int a1)
{
  void **v2; // edi
  _BYTE *v3; // edx
  void *v4; // eax

  if ( *(_DWORD *)(a1 + 120) )
    return sub_80C7880(1540);
  v2 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -81;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v4 = sub_80CF920((int)v2, v4, (unsigned int)(v3 + 1), 1u);
    v3 = v2[1];
    *v2 = v4;
  }
  v3[(_DWORD)v4] = -81;
  v2[1] = (char *)v2[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  return 0;
}

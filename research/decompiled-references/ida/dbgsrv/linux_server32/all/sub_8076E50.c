/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8076E50
// Address: 0x08076E50

//----- (08076E50) --------------------------------------------------------
int __cdecl sub_8076E50(int a1)
{
  void **v2; // edi
  _BYTE *v3; // edx
  void *v4; // eax

  if ( *(_BYTE *)(a1 + 116) == 0xD3 )
    return 0;
  v2 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -47;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v4 = sub_80CF920((int)v2, v4, (unsigned int)(v3 + 1), 1u);
    v3 = v2[1];
    *v2 = v4;
  }
  v3[(_DWORD)v4] = -47;
  v2[1] = (char *)v2[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  return 0;
}

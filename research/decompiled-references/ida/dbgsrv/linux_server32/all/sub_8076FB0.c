/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8076FB0
// Address: 0x08076FB0

//----- (08076FB0) --------------------------------------------------------
int __cdecl sub_8076FB0(int a1)
{
  void **v1; // edi
  _BYTE *v2; // edx
  void *v3; // eax

  if ( (*(_BYTE *)(a1 + 116) & 0xFD) != 0xD0 )
  {
    v1 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = -48;
    v2 = v1[1];
    v3 = *v1;
    if ( v1[2] < v2 + 1 )
    {
      v3 = sub_80CF920((int)v1, v3, (unsigned int)(v2 + 1), 1u);
      v2 = v1[1];
      *v1 = v3;
    }
    v2[(_DWORD)v3] = -48;
    v1[1] = (char *)v1[1] + 1;
    ++*(_DWORD *)(a1 + 112);
  }
  return 0;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45EE0
// Address: 0x00045EE0

//----- (00045EE0) --------------------------------------------------------
int __cdecl sub_45EE0(int a1, int a2)
{
  unsigned int v2; // edx
  int v3; // edx
  unsigned int *v4; // esi
  unsigned int v5; // eax

  v2 = *(_DWORD *)(a1 + 4);
  if ( dword_13BD2C <= v2 )
  {
    v5 = -1;
    v4 = (unsigned int *)(a2 + 4);
  }
  else
  {
    v3 = *(_DWORD *)(dword_13BD28 + 4 * v2);
    v4 = (unsigned int *)(a2 + 4);
    if ( v3 )
    {
      --*(_DWORD *)(a2 + 4);
      v5 = sub_4F1E0((int (__cdecl *)(int, int))sub_46550, v3, a1 + 20, a2);
    }
    else
    {
      v5 = -1;
    }
  }
  *v4 = v5;
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;

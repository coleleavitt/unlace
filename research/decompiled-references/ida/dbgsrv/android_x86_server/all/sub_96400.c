/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96400
// Address: 0x00096400

//----- (00096400) --------------------------------------------------------
int __cdecl sub_96400(int a1, char a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  unsigned int v4; // esi
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 24) + 4;
    v4 = 0;
    while ( *(_BYTE *)(v3 - 4) != a2 )
    {
      ++v4;
      v3 += 8;
      if ( v4 >= v2 )
        goto LABEL_5;
    }
    v5 = v3;
  }
  else
  {
LABEL_5:
    v5 = a1 + 32;
  }
  return *(_DWORD *)v5;
}

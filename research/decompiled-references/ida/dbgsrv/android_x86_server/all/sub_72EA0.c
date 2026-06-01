/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_72EA0
// Address: 0x00072EA0

//----- (00072EA0) --------------------------------------------------------
int __cdecl sub_72EA0(int a1, int a2)
{
  int result; // eax
  unsigned int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // edi
  unsigned int v6; // edx
  bool v7; // cl

  result = a1;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)a1 || *(_BYTE *)a2 )
    v7 = __PAIR64__(v4, v3) < __PAIR64__(v6, v5);
  else
    v7 = __SPAIR64__(v4, v3) < __SPAIR64__(v6, v5);
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)a1 = 0;
  return result;
}

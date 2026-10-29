/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D50B0
// Address: 0x000D50B0

//----- (000D50B0) --------------------------------------------------------
char __cdecl sub_D50B0(int a1, int a2)
{
  unsigned int v2; // edx
  _BYTE *v3; // ecx
  char v4; // dl
  int v6; // esi

  if ( *(_DWORD *)(a2 + 16) != -1 )
  {
    v2 = *(_DWORD *)(a2 + 12);
    if ( v2 < *(_DWORD *)(a1 + 12) )
      goto LABEL_3;
    return 0;
  }
  v6 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 16) = v6;
  *(_DWORD *)(a2 + 12) = 0;
  v2 = 0;
  if ( !v6 )
    return 0;
LABEL_3:
  v3 = *(_BYTE **)(*(_DWORD *)(a1 + 8) + 4 * v2);
  v4 = v3[7];
  if ( v4 == 2 )
    return (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v3 + 8))(v3, a2);
  else
    return v4 == 0;
}

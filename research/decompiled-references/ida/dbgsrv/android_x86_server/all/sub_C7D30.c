/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7D30
// Address: 0x000C7D30

//----- (000C7D30) --------------------------------------------------------
int __cdecl sub_C7D30(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  char v4; // cl

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  *(_BYTE *)(a1 + 16) = 1;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_BYTE *)(v3 + 5);
  if ( v4 == 2 )
    v2 = (**(int (__cdecl ***)(int, int))v3)(v3, a2);
  else
    LOBYTE(v2) = v4 == 0;
  *(_BYTE *)(a1 + 16) = 0;
  return v2;
}
// C7D80: variable 'v2' is possibly undefined

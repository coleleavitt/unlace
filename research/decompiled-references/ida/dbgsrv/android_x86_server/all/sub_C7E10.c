/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7E10
// Address: 0x000C7E10

//----- (000C7E10) --------------------------------------------------------
int __cdecl sub_C7E10(int a1, int a2)
{
  int v2; // ecx
  _BYTE *v3; // eax
  char v4; // cl

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  *(_BYTE *)(a1 + 16) = 1;
  v3 = *(_BYTE **)(a1 + 12);
  v4 = v3[7];
  if ( v4 == 2 )
    v2 = (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v3 + 8))(v3, a2);
  else
    LOBYTE(v2) = v4 == 0;
  *(_BYTE *)(a1 + 16) = 0;
  return v2;
}
// C7E61: variable 'v2' is possibly undefined

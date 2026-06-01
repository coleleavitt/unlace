/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7DA0
// Address: 0x000C7DA0

//----- (000C7DA0) --------------------------------------------------------
int __cdecl sub_C7DA0(int a1, int a2)
{
  int v2; // ecx
  _BYTE *v3; // eax
  char v4; // cl

  if ( *(_BYTE *)(a1 + 16) )
    return 0;
  *(_BYTE *)(a1 + 16) = 1;
  v3 = *(_BYTE **)(a1 + 12);
  v4 = v3[6];
  if ( v4 == 2 )
    v2 = (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v3 + 4))(v3, a2);
  else
    LOBYTE(v2) = v4 == 0;
  *(_BYTE *)(a1 + 16) = 0;
  return v2;
}
// C7DF1: variable 'v2' is possibly undefined

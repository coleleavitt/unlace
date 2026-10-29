/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7640
// Address: 0x000D7640

//----- (000D7640) --------------------------------------------------------
char __cdecl sub_D7640(int a1, int a2)
{
  _BYTE *v2; // eax
  char v3; // cl

  v2 = *(_BYTE **)(a1 + 12);
  v3 = v2[6];
  if ( v3 == 2 )
    return (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v2 + 4))(v2, a2);
  else
    return v3 == 0;
}

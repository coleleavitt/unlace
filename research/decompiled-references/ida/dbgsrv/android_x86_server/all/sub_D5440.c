/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5440
// Address: 0x000D5440

//----- (000D5440) --------------------------------------------------------
int __cdecl sub_D5440(int a1, int a2)
{
  _BYTE *v2; // esi
  _BYTE *v3; // esi
  int result; // eax

  v2 = *(_BYTE **)(a1 + 8);
  (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v2 + 12))(v2, a2);
  if ( v2[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v2 + 16))(v2, a2);
  v3 = *(_BYTE **)(a1 + 12);
  result = (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v3 + 12))(v3, a2);
  if ( v3[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v3 + 16))(v3, a2);
  return result;
}

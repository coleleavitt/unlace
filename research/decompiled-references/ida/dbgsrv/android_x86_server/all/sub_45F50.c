/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F50
// Address: 0x00045F50

//----- (00045F50) --------------------------------------------------------
int __cdecl sub_45F50(int a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  int v4; // eax
  unsigned __int16 dest; // [esp+Ah] [ebp-Eh] BYREF
  unsigned int v7; // [esp+Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  if ( dword_13BD2C > v2 && (v3 = *(FILE **)(dword_13BD28 + 4 * v2)) != nullptr )
  {
    v4 = freadbytes(v3, (char *)&dest, 2, *(_DWORD *)(a1 + 24) != 0);
    *(_DWORD *)(a2 + 4) = v4 != 0 ? -1 : dest;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = -1;
  }
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;

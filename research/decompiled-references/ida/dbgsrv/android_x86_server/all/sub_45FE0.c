/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45FE0
// Address: 0x00045FE0

//----- (00045FE0) --------------------------------------------------------
int __cdecl sub_45FE0(int a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  int v4; // eax
  _DWORD dest[4]; // [esp+8h] [ebp-10h] BYREF

  dest[1] = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  if ( dword_13BD2C > v2 && (v3 = *(FILE **)(dword_13BD28 + 4 * v2)) != nullptr )
  {
    v4 = freadbytes(v3, (char *)dest, 4, *(_DWORD *)(a1 + 24) != 0);
    *(_DWORD *)(a2 + 4) = v4 != 0 ? -1 : dest[0];
  }
  else
  {
    *(_DWORD *)(a2 + 4) = -1;
  }
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;

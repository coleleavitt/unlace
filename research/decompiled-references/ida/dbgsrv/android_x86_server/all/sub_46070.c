/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46070
// Address: 0x00046070

//----- (00046070) --------------------------------------------------------
int __cdecl sub_46070(int a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  _WORD v5[7]; // [esp+Ah] [ebp-Eh] BYREF

  *(_DWORD *)&v5[1] = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  if ( dword_13BD2C > v2 && (v3 = *(FILE **)(dword_13BD28 + 4 * v2)) != nullptr )
  {
    v5[0] = *(_WORD *)(a1 + 24);
    *(_DWORD *)(a2 + 4) = fwritebytes(v3, (unsigned int)v5, 2u, *(_DWORD *)(a1 + 44) != 0);
  }
  else
  {
    *(_DWORD *)(a2 + 4) = -1;
  }
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;

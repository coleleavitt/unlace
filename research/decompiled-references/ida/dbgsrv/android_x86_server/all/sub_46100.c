/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46100
// Address: 0x00046100

//----- (00046100) --------------------------------------------------------
int __cdecl sub_46100(_DWORD *a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  int v5[4]; // [esp+8h] [ebp-10h] BYREF

  v5[1] = __readgsdword(0x14u);
  v2 = a1[1];
  if ( dword_13BD2C > v2 && (v3 = *(FILE **)(dword_13BD28 + 4 * v2)) != nullptr )
  {
    v5[0] = a1[6];
    *(_DWORD *)(a2 + 4) = fwritebytes(v3, (unsigned int)v5, 4u, a1[11] != 0);
  }
  else
  {
    *(_DWORD *)(a2 + 4) = -1;
  }
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;

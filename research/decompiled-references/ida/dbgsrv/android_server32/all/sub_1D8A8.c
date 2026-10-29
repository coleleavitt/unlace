/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D8A8
// Address: 0x0001D8A8

//----- (0001D8A8) --------------------------------------------------------
int *__fastcall sub_1D8A8(int a1)
{
  int *result; // r0
  _DWORD *v3; // r4

  result = *(int **)(a1 + 796);
  v3 = (_DWORD *)(a1 + 796);
  if ( result )
  {
    sub_1A0E8(result);
    *v3 = 0;
    sub_25112((int)&dword_DE2DC, (_DWORD *)dword_DE2E0);
    dword_DE2DC = (int)&dword_DE2E0;
    dword_DE2E0 = 0;
    dword_DE2E4 = 0;
    return &dword_DE2E0;
  }
  return result;
}
// DE2DC: using guessed type int dword_DE2DC;
// DE2E0: using guessed type int dword_DE2E0;
// DE2E4: using guessed type int dword_DE2E4;

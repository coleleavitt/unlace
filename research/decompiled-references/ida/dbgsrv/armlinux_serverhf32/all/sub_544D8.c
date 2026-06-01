/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_544D8
// Address: 0x000544D8

//----- (000544D8) --------------------------------------------------------
bool __fastcall sub_544D8(int *a1, char a2)
{
  int v2; // r2

  v2 = *a1;
  *((_BYTE *)a1 + 108) = a2;
  return (*(int (__fastcall **)(int *, int *))(v2 + 84))(a1, a1 + 24) == 1;
}

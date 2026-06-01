/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5465C
// Address: 0x0005465C

//----- (0005465C) --------------------------------------------------------
bool __fastcall sub_5465C(int *a1, char a2)
{
  int v2; // r2

  v2 = *a1;
  *((_BYTE *)a1 + 108) = a2;
  return (*(int (__fastcall **)(int *, int *))(v2 + 84))(a1, a1 + 24) == 1;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BC80
// Address: 0x0008BC80

//----- (0008BC80) --------------------------------------------------------
_DWORD *__fastcall sub_8BC80(_DWORD *a1, int a2)
{
  *a1 = a1 + 2;
  sub_8BC0C(a1, *(_BYTE **)a2, *(_DWORD *)(a2 + 4) + *(_DWORD *)a2);
  return a1;
}

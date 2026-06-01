/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1FE60
// Address: 0x0001FE60

//----- (0001FE60) --------------------------------------------------------
char __cdecl sub_1FE60(int a1, _DWORD *a2, int a3)
{
  char result; // al

  result = (char)a2;
  if ( (a2[4] & 0xFFFFFFF) != 0 )
  {
    result = sub_20E60((_DWORD *)(a1 + 56), a2, a3);
    *(_BYTE *)(a1 + 676) = 0;
  }
  return result;
}

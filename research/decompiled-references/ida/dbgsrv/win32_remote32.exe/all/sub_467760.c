/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467760
// Address: 0x00467760

//----- (00467760) --------------------------------------------------------
int __cdecl sub_467760(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int result; // eax

  result = 1;
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    sub_4676C0(a2[6], (_DWORD *)a2[5], a2[4], a2[3]);
    *a4 = a2;
    return 3;
  }
  return result;
}

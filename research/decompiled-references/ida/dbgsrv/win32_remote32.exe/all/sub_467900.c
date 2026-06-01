/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467900
// Address: 0x00467900

//----- (00467900) --------------------------------------------------------
int __cdecl sub_467900(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int result; // eax

  result = 1;
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    sub_467950(*(_DWORD *)(a5 + 16), *(_DWORD *)(a5 + 36), *(_DWORD *)(a5 + 40));
    *a4 = a2;
    return 3;
  }
  return result;
}

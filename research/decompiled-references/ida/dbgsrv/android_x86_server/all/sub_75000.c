/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75000
// Address: 0x00075000

//----- (00075000) --------------------------------------------------------
int __cdecl sub_75000(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(a1 + 100) = a2;
  return result;
}

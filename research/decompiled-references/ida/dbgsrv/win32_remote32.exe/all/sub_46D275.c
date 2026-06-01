/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D275
// Address: 0x0046D275

//----- (0046D275) --------------------------------------------------------
int __cdecl sub_46D275(unsigned __int8 a1, _DWORD *a2)
{
  int result; // eax

  result = (a1 << 31) | 0x7FF00000;
  *a2 = 1;
  a2[1] = result;
  return result;
}

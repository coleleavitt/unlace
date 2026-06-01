/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D2C6
// Address: 0x0046D2C6

//----- (0046D2C6) --------------------------------------------------------
int __cdecl sub_46D2C6(unsigned __int8 a1, __int16 a2, int a3, int a4, _DWORD *a5)
{
  a5[1] = a4 & 0xFFFFF | (((a1 << 11) | (a2 + 1023) & 0x7FF) << 20);
  *a5 = a3;
  return 0;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34DAC
// Address: 0x00034DAC

//----- (00034DAC) --------------------------------------------------------
int __fastcall sub_34DAC(int a1, int a2, __int64 a3, unsigned int a4)
{
  int result; // r0

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  result = HIDWORD(a3);
  if ( a3 > 1879047929 )
  {
    if ( (unsigned __int64)(a3 - 1879047930) >= 3 && a3 != 0x7FFFFFFF )
    {
      result = 2147483645;
      if ( a3 != 2147483645 )
        return result;
    }
    return sub_32154(a2, (void **)a1, (__int64 *)(a2 + 264), a4);
  }
  if ( (unsigned __int64)a3 <= 0x1D )
  {
    result = 1 << a3;
    if ( ((1 << a3) & 0x2000C002) != 0 )
      return sub_32154(a2, (void **)a1, (__int64 *)(a2 + 264), a4);
  }
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BD0F0
// Address: 0x080BD0F0

//----- (080BD0F0) --------------------------------------------------------
unsigned __int32 __cdecl sub_80BD0F0(int a1)
{
  unsigned __int32 result; // eax

  result = _byteswap_ulong(*(_DWORD *)(a1 + 4) - 5);
  **(_DWORD **)a1 = result;
  return result;
}

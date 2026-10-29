/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96BB0
// Address: 0x00096BB0

//----- (00096BB0) --------------------------------------------------------
unsigned __int32 __cdecl sub_96BB0(int a1)
{
  unsigned __int32 result; // eax

  result = _byteswap_ulong(*(_DWORD *)(a1 + 4) - 5);
  **(_DWORD **)a1 = result;
  return result;
}

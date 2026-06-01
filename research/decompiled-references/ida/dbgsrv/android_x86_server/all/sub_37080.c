/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37080
// Address: 0x00037080

//----- (00037080) --------------------------------------------------------
unsigned __int32 __cdecl sub_37080(int a1, int a2)
{
  char v2; // cl
  unsigned __int32 result; // eax

  v2 = *(_BYTE *)(a1 + 477);
  if ( v2 && !*(_BYTE *)(a1 + 476) && *(_WORD *)(a1 + 402) == 8 )
    return _byteswap_ulong(*(_DWORD *)(a2 + 12));
  result = (unsigned __int8)*(_DWORD *)(a2 + 8);
  if ( v2 )
    return *(_DWORD *)(a2 + 8);
  return result;
}

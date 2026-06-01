/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB240
// Address: 0x00000000000AB240

//----- (00000000000AB240) ----------------------------------------------------
_DWORD *__fastcall sub_AB240(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)a1;
  **(_DWORD **)a1 = _byteswap_ulong(*(_DWORD *)(a1 + 8) - 5);
  return result;
}

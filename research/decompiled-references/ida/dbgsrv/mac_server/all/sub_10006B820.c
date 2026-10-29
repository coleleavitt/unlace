/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B820
// Address: 0x000000010006B820

//----- (000000010006B820) ----------------------------------------------------
_DWORD *__fastcall sub_10006B820(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)a1;
  **(_DWORD **)a1 = _byteswap_ulong(*(_DWORD *)(a1 + 8) - 5);
  return result;
}

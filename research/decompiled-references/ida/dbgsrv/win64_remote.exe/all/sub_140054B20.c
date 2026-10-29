/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054B20
// Address: 0x0000000140054B20

//----- (0000000140054B20) ----------------------------------------------------
_DWORD *__fastcall sub_140054B20(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)a1;
  **(_DWORD **)a1 = _byteswap_ulong(*(_DWORD *)(a1 + 8) - 5);
  return result;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479098
// Address: 0x0000000000479098

//----- (0000000000479098) ----------------------------------------------------
__int64 __fastcall sub_479098(__int64 a1)
{
  _DWORD *v1; // x1
  __int64 result; // x0

  v1 = *(_DWORD **)a1;
  result = bswap32(*(_QWORD *)(a1 + 8) - 5);
  *v1 = result;
  return result;
}

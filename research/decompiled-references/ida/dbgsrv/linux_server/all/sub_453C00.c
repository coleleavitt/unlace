/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453C00
// Address: 0x0000000000453C00

//----- (0000000000453C00) ----------------------------------------------------
_DWORD *__fastcall sub_453C00(__int64 a1, int a2)
{
  _DWORD *result; // rax
  _DWORD *v3; // rdx

  result = *(_DWORD **)(a1 + 48);
  v3 = &result[14 * *(_QWORD *)(a1 + 56)];
  if ( !(56LL * *(_QWORD *)(a1 + 56)) )
    return nullptr;
  while ( *result != a2 )
  {
    result += 14;
    if ( result == v3 )
      return nullptr;
  }
  return result;
}

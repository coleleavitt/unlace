/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400438F0
// Address: 0x00000001400438F0

//----- (00000001400438F0) ----------------------------------------------------
_DWORD *__fastcall sub_1400438F0(__int64 a1, int a2)
{
  _DWORD *result; // rax
  _DWORD *v3; // r8

  result = *(_DWORD **)(a1 + 48);
  v3 = &result[14 * *(_QWORD *)(a1 + 56)];
  if ( result == v3 )
    return nullptr;
  while ( *result != a2 )
  {
    result += 14;
    if ( result == v3 )
      return nullptr;
  }
  return result;
}

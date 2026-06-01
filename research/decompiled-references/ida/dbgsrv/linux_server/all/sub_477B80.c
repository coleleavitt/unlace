/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477B80
// Address: 0x0000000000477B80

//----- (0000000000477B80) ----------------------------------------------------
_BYTE *__fastcall sub_477B80(__int64 a1, char a2)
{
  __int64 v2; // rcx
  _BYTE *result; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return nullptr;
  result = *(_BYTE **)a1;
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 40;
    if ( v4 == v2 )
      return nullptr;
  }
  return result;
}
